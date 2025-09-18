/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise6.h"

#define ON 0
#define OFF 1

/**
  * @brief Use for testing all GPIOs necessary
  */
void ex6_init(){
	HAL_GPIO_TogglePin(GPIOB, LED_1_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_2_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_3_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_4_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_5_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_6_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_7_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_8_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_9_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_10_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_11_Pin);
	HAL_GPIO_TogglePin(GPIOB, LED_12_Pin);
}

/**
 * @brief
 */
void ex6_run(){
	int counter = 12;
	while (1)
	{
		switch (counter) {
		    case 1:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 2:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 3:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 4:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 5:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 6:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 7:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 8:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 9:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 10:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 11:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, ON);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
		        break;

		    case 12:
		        HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
		        HAL_GPIO_WritePin(GPIOB, LED_12_Pin, ON);
		        break;
		    default:
		    	HAL_GPIO_WritePin(GPIOB, LED_1_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_2_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_3_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_4_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_5_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_6_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_7_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_8_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_9_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_10_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_11_Pin, OFF);
				HAL_GPIO_WritePin(GPIOB, LED_12_Pin, OFF);
				break;
		}
		counter--;
		if(counter <= 0) counter = 12;
		HAL_Delay(1000);
	}
}



