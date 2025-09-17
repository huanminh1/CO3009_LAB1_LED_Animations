/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise2.h"

#define ON 0
#define OFF 1
#define RED_TIME 5
#define	GREEN_TIME 3
#define	YELLOW_TIME 2
typedef enum{
	RED,
	YELLOW,
	GREEN
}LedState;
/**
  * @brief Use for testing all GPIOs necessary
  */
void ex2_init(){
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN_Pin);
}

/**
 * @brief State transitions 5 seconds for the RED, 2 seconds for the YELLOW and 3 seconds for the GREEN
 */
void ex2_run(){
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, ON);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, OFF);
	LedState ledState = RED;
	int counter = RED_TIME;
	while(1){
		switch(ledState){
			case RED:
				if(counter <= 0){
					ledState = GREEN;
					counter = GREEN_TIME;
					HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, OFF);
					HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, OFF);
					HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, ON);

				}
				break;
			case GREEN:
				if(counter <= 0){
					ledState = YELLOW;
					counter = YELLOW_TIME;
					HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, OFF);
					HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, ON);
					HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, OFF);
				}
				break;
			case YELLOW:
				if(counter <= 0){
					ledState = RED;
					counter = RED_TIME;
					HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, ON);
					HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, OFF);
					HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, OFF);

				}
				break;

			default:
				break;
		}
		counter--;
		HAL_Delay(1000);
	}
}



