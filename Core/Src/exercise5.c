/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise3.h" //using ex3_init()
#include "exercise4.h" //using ex4_init() and display7SEG(int num)
#include "exercise5.h"

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
void ex5_init(){
	ex3_init();
	ex4_init();
}

/**
 * @brief State transitions for 2 LEDs every 2s
 */
void ex5_run(){
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
	int counterLED = 9;
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

		//LED 7SEG
		if(counterLED < 0) counterLED = 9;
		display7SEG(counterLED--);

		HAL_Delay(1000);
	}
}



