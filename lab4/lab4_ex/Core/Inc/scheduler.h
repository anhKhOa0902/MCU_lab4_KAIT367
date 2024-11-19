/*
 * scheduler.h
 *
 *  Created on: Nov 4, 2024
 *      Author: KAI_T367
 */
#include "main.h"
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#include <stdint.h>
typedef struct {
	void (*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint32_t RunMe;
	uint32_t TaskID;
} sTask;

#define SCH_MAX_TASKS	40
#define NO_TASK_ID 		0

extern sTask SCH_task_G[SCH_MAX_TASKS];


void SCH_init(void);
void SCH_Update(void);
void SCH_Add_Task(void (*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks(void);


#endif /* INC_SCHEDULER_H_ */
