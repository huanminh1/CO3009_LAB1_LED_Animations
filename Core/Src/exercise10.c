/*
 * exercise1.c
 *
 *  Created on: Sep 9, 2025
 *      Author: Huan Minh
 */
#include "exercise10.h"
#include "exercise8.h"
#include "exercise6.h"
#include "exercise7.h"
#define ON 0
#define OFF 1

/**
  * @brief Use for testing all GPIOs necessary
  */
void ex10_init(){
	ex6_init();
}

/**
  * @brief Simulate a analog clock 00:00:00 -> 11:59:59
  */
void ex10_run(){
	// 00:00:00 -> 11:59:59
	int hour = 0;
	int minute = 0;
	int second = 0;
	while(1){
		clearAllClock();
		setNumberOnClock(hour);
		setNumberOnClock(minute / 5);
		setNumberOnClock(second / 5);
		second++;
		if(second >= 60){
			second = 0;
			++minute;
		}
		if(minute >= 60){
			minute = 0;
			++hour;
		}
		if(hour >= 12){
			hour = 0;
		}
		HAL_Delay(20);
	}
}



