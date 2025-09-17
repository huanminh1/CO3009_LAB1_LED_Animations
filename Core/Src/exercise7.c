/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise7.h"
#include "exercise6.h" // using ex6_init()
#define ON 0
#define OFF 1

/**
  * @brief Use for testing all GPIOs necessary
  */
void ex7_init(){
	ex6_init();
}

/**
  * @brief Turn of 12 LEDs
  */
void clearAllClock(){
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
}


/**
 * @brief
 */
void ex7_run(){
	while (1) {
		HAL_Delay(1000);
	}
}



