/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise4.h"

#define ON 0
#define OFF 1
/**
  * @brief Use for testing all GPIOs necessary
  */
void ex4_init(){
	HAL_GPIO_TogglePin(GPIOA, a_Pin);
	HAL_GPIO_TogglePin(GPIOA, b_Pin);
	HAL_GPIO_TogglePin(GPIOA, c_Pin);
	HAL_GPIO_TogglePin(GPIOA, d_Pin);
	HAL_GPIO_TogglePin(GPIOA, e_Pin);
	HAL_GPIO_TogglePin(GPIOA, f_Pin);
}

/**
 * @brief 7 LED segment
 */
void display7SEG (int num){
	    switch(num) {
	        case 0:
	            HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
	            HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
	            HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
	            HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
	            HAL_GPIO_WritePin(GPIOA, e_Pin, ON);
	            HAL_GPIO_WritePin(GPIOA, f_Pin, ON);
	            HAL_GPIO_WritePin(GPIOA, g_Pin, OFF);
	            break;
	        case 1:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, OFF);
			   break;

		   case 2:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   case 3:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   case 4:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   case 5:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   case 6:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   case 7:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, OFF);
			   break;

		   case 8:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   case 9:
			   HAL_GPIO_WritePin(GPIOA, a_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, ON);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, ON);
			   break;

		   default:
			   //Tắt hết
			   HAL_GPIO_WritePin(GPIOA, a_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, b_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, c_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, d_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, e_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, f_Pin, OFF);
			   HAL_GPIO_WritePin(GPIOA, g_Pin, OFF);
			   break;
	    }
}


/**
 * @brief 7 LED segment, count number from 0 to 9
 */
void ex4_run(){
	int counter = 0;
	while(1){
		if(counter >= 10) counter = 0;
		 display7SEG(counter++);
		 HAL_Delay(1000);
	}
}



