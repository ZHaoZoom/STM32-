/*
 * motor.c
 *
 *  Created on: Nov 14, 2023
 *      Author: gleeman
 */

#include "main.h"
#include "tim.h"
#include "gpio.h"


void Speed(int speed1, int speed2)
{
	if(speed1 >= 0)
	{
		HAL_GPIO_WritePin(GPIOB, AIN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, AIN2_Pin, GPIO_PIN_RESET);
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, speed1);
	}
	else if(speed1 < 0)
	{
		HAL_GPIO_WritePin(GPIOB, AIN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, AIN2_Pin, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, speed1);
	}
	else;


	if(speed2 >= 0)
	{
		HAL_GPIO_WritePin(GPIOB, BIN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, BIN2_Pin, GPIO_PIN_RESET);
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, speed2);
	}
	else if(speed2 < 0)
	{
		HAL_GPIO_WritePin(GPIOB, BIN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, BIN2_Pin, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, speed2);
	}
	else;
}

