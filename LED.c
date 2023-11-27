/*
 * LED.c
 *
 *  Created on: Nov 16, 2023
 *      Author: gleeman
 */
#include "main.h"
#include "tim.h"

int pwm, std = 0;

void LED_Set(uint8_t PWM)
{
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, PWM);
}

void LED_Breath()
{

	if(std == 0)
	{
		++pwm;
		LED_Set(pwm);
		HAL_Delay(3);
		if(pwm == 100)
		{
			std = 1;
		}
	}
	else if(std == 1)
	{
		--pwm;
		LED_Set(pwm);
		HAL_Delay(3);
		if(pwm == 0)
		{
			std = 0;
		}
	}
}
