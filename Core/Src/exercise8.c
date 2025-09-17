/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise8.h"
#include "exercise6.h"
#include "exercise7.h"
#define ON 0
#define OFF 1

/**
  * @brief Use for testing all GPIOs necessary
  */
void ex8_init(){
	ex6_init();
}

/**
 * @brief State transitions for 2 LEDs every 2s
 */

void setNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB, LED_12_Pin, ON);
			break;

		case 1:
			HAL_GPIO_WritePin(GPIOB, LED_1_Pin, ON);
			break;

		case 2:
			HAL_GPIO_WritePin(GPIOB, LED_2_Pin, ON);
			break;

		case 3:
			HAL_GPIO_WritePin(GPIOB, LED_3_Pin, ON);
			break;

		case 4:
			HAL_GPIO_WritePin(GPIOB, LED_4_Pin, ON);
			break;

		case 5:
			HAL_GPIO_WritePin(GPIOB, LED_5_Pin, ON);
			break;

		case 6:
			HAL_GPIO_WritePin(GPIOB, LED_6_Pin, ON);
			break;

		case 7:
			HAL_GPIO_WritePin(GPIOB, LED_7_Pin, ON);
			break;

		case 8:
			HAL_GPIO_WritePin(GPIOB, LED_8_Pin, ON);
			break;

		case 9:
			HAL_GPIO_WritePin(GPIOB, LED_9_Pin, ON);
			break;

		case 10:
			HAL_GPIO_WritePin(GPIOB, LED_10_Pin, ON);
			break;

		case 11:
			HAL_GPIO_WritePin(GPIOB, LED_11_Pin, ON);
			break;

		default:
			break;
	}
}


void ex8_run(){
	int number = 0;
	clearAllClock();
	while(1){
		if(number >=12){
			clearAllClock();
			number = 0;
		}
		setNumberOnClock(number++);
		HAL_Delay(1000);

	}
}



