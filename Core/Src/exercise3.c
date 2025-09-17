/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise3.h"

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
void ex3_init(){
	HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_RED1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_YELLOW1_Pin);
	HAL_GPIO_TogglePin(GPIOA, LED_GREEN1_Pin);
}
/**
 * @brief 4-way traffic light
 */
void ex3_run(){
	//Led Vertical
	HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, ON);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, OFF);

	//Led Horizontal
	HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, OFF);
	HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, OFF);
	HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, ON);

	LedState ledStateV = RED;
	LedState ledStateH = GREEN;

	int counterV = RED_TIME;
	int counterH = GREEN_TIME;
		while(1){
			switch(ledStateV){
				case RED:
					if(counterV <= 0){
						ledStateV = GREEN;
						counterV = GREEN_TIME;
						HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, OFF);
						HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, OFF);
						HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, ON);

					}
					break;
				case GREEN:
					if(counterV <= 0){
						ledStateV = YELLOW;
						counterV = YELLOW_TIME;
						HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, OFF);
						HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, ON);
						HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, OFF);
					}
					break;
				case YELLOW:
					if(counterV <= 0){
						ledStateV = RED;
						counterV = RED_TIME;
						HAL_GPIO_WritePin(GPIOA, LED_RED_Pin, ON);
						HAL_GPIO_WritePin(GPIOA, LED_YELLOW_Pin, OFF);
						HAL_GPIO_WritePin(GPIOA, LED_GREEN_Pin, OFF);

					}
					break;
				default:
					break;
			}
			counterV--;

			switch(ledStateH){
						case RED:
							if(counterH <= 0){
								ledStateH = GREEN;
								counterH = GREEN_TIME;
								HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, OFF);
								HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, OFF);
								HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, ON);

							}
							break;
						case GREEN:
							if(counterH <= 0){
								ledStateH = YELLOW;
								counterH = YELLOW_TIME;
								HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, OFF);
								HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, ON);
								HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, OFF);
							}
							break;
						case YELLOW:
							if(counterH <= 0){
								ledStateH = RED;
								counterH = RED_TIME;
								HAL_GPIO_WritePin(GPIOA, LED_RED1_Pin, ON);
								HAL_GPIO_WritePin(GPIOA, LED_YELLOW1_Pin, OFF);
								HAL_GPIO_WritePin(GPIOA, LED_GREEN1_Pin, OFF);

							}
							break;

						default:
							break;
					}
			counterH--;
			HAL_Delay(1000);
		}
}



