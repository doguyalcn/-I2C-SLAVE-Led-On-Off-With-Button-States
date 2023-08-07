/*
 * i2c_slave.c
 *
 *  Created on: Aug 1, 2023
 *      Author: Doğu
 */

#include "main.h"
#include "i2c.h"
#include "i2c_slave.h"

extern I2C_HandleTypeDef hi2c1;

#define RxSIZE 1
uint8_t RxData[RxSIZE];	//SENDING ONLY ONE BYTE

int count = 0;			//THIS COUNT COUNTS MESSAGES IN CALLBACK FUNCTION

void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *hi2c)
{
	count++;
	LedLight(RxData);
}

void LedLight(uint8_t *Arr)	// LED LIGHT FUNCTION
{
	if(Arr[0] == 0)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);	//RESETTING LED
	}
	if(Arr[0] == 1)
	{
		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);	// SETTING LED
	}
}
