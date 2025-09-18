/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise9.h"
#include "exercise6.h"
#include "exercise7.h"
#include "exercise8.h"
#define ON 0
#define OFF 1

/**
  * @brief Use for testing all GPIOs necessary
  */
void ex9_init(){
	ex6_init();
}

/**
 * @brief
 */

void clearNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
			break;

		case 1:
			HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
			break;

		case 2:
			HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
			break;

		case 3:
			HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
			break;

		case 4:
			HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
			break;

		case 5:
			HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
			break;

		case 6:
			HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
			break;

		case 7:
			HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
			break;

		case 8:
			HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
			break;

		case 9:
			HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
			break;

		case 10:
			HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
			break;

		case 11:
			HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
			break;

		default:
			break;
	}
}


void ex9_run(){
	int counter = 11;
	int firstLoop = 1;
	HAL_GPIO_WritePin(GPIOB, LED_1_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_2_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_3_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_4_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_5_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_6_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_7_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_8_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_9_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_10_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_11_Pin, ON);
	HAL_GPIO_WritePin(GPIOB, LED_12_Pin, ON);

		while (1)
		{
			if (counter < 0)
			{
				counter = 11;
				HAL_GPIO_WritePin(GPIOB, LED_1_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_2_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_3_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_4_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_5_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_6_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_7_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_8_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_9_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_10_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_11_Pin, ON);
				HAL_GPIO_WritePin(GPIOB, LED_12_Pin, ON);
			}
			if (firstLoop){
				firstLoop = 0;
			}
			else{
				clearNumberOnClock(counter);
				--counter;
			}
			HAL_Delay(1000);

		}
}



