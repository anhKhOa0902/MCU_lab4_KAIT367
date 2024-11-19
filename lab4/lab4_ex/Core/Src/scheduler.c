/*
 * scheduler.c
 *
 *  Created on: Nov 5, 2024
 *      Author: KAI_T367
 */


#include "main.h"
#include "scheduler.h"
sTask SCH_task_G[SCH_MAX_TASKS];
unsigned char current_task_index=0;
void SCH_Delete_Task(unsigned char Task_Index){
	if (SCH_task_G[Task_Index].pTask==0){
		return;
	}else {
		SCH_task_G[Task_Index].pTask = 0x0000;
		SCH_task_G[Task_Index].Delay = 0;
		SCH_task_G[Task_Index].Period = 0;
		SCH_task_G[Task_Index].RunMe = 0;
	}
}
void SCH_init(void){
	unsigned char i;
	for (i=0; i<SCH_MAX_TASKS; i++){
		SCH_Delete_Task(i);
	}
	current_task_index=0;
}

// void SCH_Update(void){
//	 for (int i=0; i< current_task_index;i++){
//		 if (SCH_task_G[i].Delay>0){
//			 SCH_task_G[i].Delay--;
//		 }else{
//			 SCH_task_G[i].Delay=SCH_task_G[i].Period;
//			 SCH_task_G[i].RunMe +=1;
//		 }
//	 }
// }

void SCH_Update(void) {
    unsigned char Index;
    for (Index = 0; Index < SCH_MAX_TASKS; Index++) {
        // Check if there is a task at this location
        if (SCH_task_G[Index].pTask) {
            if (SCH_task_G[Index].Delay == 0) {
                // The task is due to run
                // Inc. the 'RunMe' flag
                SCH_task_G[Index].RunMe += 1;

                if (SCH_task_G[Index].Period) {
                    // Schedule periodic tasks to run again
                    SCH_task_G[Index].Delay = SCH_task_G[Index].Period;
                }
            } else {
                // Not yet ready to run: just decrement the delay
                SCH_task_G[Index].Delay -= 1;
            }
        }
    }
}


void SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD){
	 if (current_task_index<SCH_MAX_TASKS){
		 SCH_task_G[current_task_index].pTask=pFunction;
		 SCH_task_G[current_task_index].Delay=DELAY;
		 SCH_task_G[current_task_index].Period=PERIOD;
		 SCH_task_G[current_task_index].RunMe=0;
		 SCH_task_G[current_task_index].TaskID=current_task_index;
		 current_task_index++;
	 }
 }


 void SCH_Dispatch_Tasks(void){
	 for (int i=0;i<current_task_index;i++){
		 if (SCH_task_G[i].RunMe > 0){
			 SCH_task_G[i].RunMe--;
			 (*SCH_task_G[i].pTask)();
			 if (SCH_task_G[i].Period==0){  //one-shot task
				 SCH_Delete_Task(SCH_task_G[i].TaskID);
			 }
		 }
	 }
 }
