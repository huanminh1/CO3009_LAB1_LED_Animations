/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise1.h"

#define LED_ON 0
#define LED_OFF 1

/**
  * @brief Use for testing all GPIOs necessary
  */
void ex1_init(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

/**
 * @brief State transitions for 2 LEDs every 2s
 */
void ex1_run(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, LED_ON);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, LED_OFF);
	int counter = 2;
	while(1){
		if(counter <= 0){
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
			counter = 2;
		}
		counter--;
		HAL_Delay(1000);
	}
}



