/*
 * led.c
 *
 *  Created on: Nov 4, 2024
 *      Author: KAI_T367
 */


#include "led.h"
#include "main.h"
  int hour=14;
  int minute=59;
  int second=57;

void offLed(){
	HAL_GPIO_WritePin(Led_GPIO_Port,Led_Pin, RESET);
	HAL_GPIO_WritePin(amber_GPIO_Port,amber_Pin, RESET);
	HAL_GPIO_WritePin(pink_GPIO_Port,pink_Pin, RESET);
	HAL_GPIO_WritePin(white_GPIO_Port,white_Pin, RESET);
}
void LedBlinking(){
	HAL_GPIO_TogglePin(Led_GPIO_Port,Led_Pin);
}
void amber_led(){
	HAL_GPIO_TogglePin(amber_GPIO_Port, amber_Pin);
}
void pink_led(){
	HAL_GPIO_TogglePin(pink_GPIO_Port, pink_Pin);
}
void white_led(){
	HAL_GPIO_TogglePin(white_GPIO_Port, white_Pin);
}
void dot_blink(){
	HAL_GPIO_TogglePin(dot_GPIO_Port, dot_Pin);
}

void time_run(){
	second++;
    if (second>=60){
    	second=0;
    	minute++;
    }
    if (minute>=60){
    	minute=0;
    	hour++;
    }
    if (hour>=24){
    	hour=0;
    }
}

void display7SEG(int a){
  	  switch (a){
  	  case 0:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  		  break;
  	  case 1:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  		  break;
  	  case 2:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 3:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 4:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 5:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 6:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 7:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  		  break;
  	  case 8:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 9:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  default:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  	  }
 }
//void LEDScanningSec() {
// 	static int scan_index = 1;
// 	switch (scan_index) {
// 		case 1:
// 			HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, GPIO_PIN_SET);
// 			display7SEG(second / 10);
// 			scan_index = 2;
// 			break;
// 		case 2:
// 			HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, GPIO_PIN_SET);
// 			display7SEG(second % 10);
// 			scan_index = 1;
// 			break;
// 		default:
// 			break;
// 	}
//}
void LEDScanning() {
 	static int scan_index = 1;
 	switch (scan_index) {
 		case 1:
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
 			display7SEG(hour / 10);
 			scan_index = 2;
 			break;
 		case 2:
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
 			display7SEG(hour % 10);
 			scan_index = 3;
 			break;
 		case 3:
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
 			display7SEG(minute / 10);
 			scan_index = 4;
 			break;
 		case 4:
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_SET);
 			display7SEG(minute % 10);
 			scan_index = 1;
 			break;
// 		case 5:
// 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, GPIO_PIN_SET);
// 			display7SEG(second % 10);
// 			scan_index = 6;
// 			break;
// 		case 6:
// 			HAL_GPIO_WritePin(EN5_GPIO_Port, EN5_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
// 			HAL_GPIO_WritePin(EN6_GPIO_Port, EN6_Pin, GPIO_PIN_SET);
// 			display7SEG(second % 10);
// 			scan_index = 1;
// 			break;
 		default:
 			break;
 	}
 }
