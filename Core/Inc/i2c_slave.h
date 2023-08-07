/*
 * i2c_slave.h
 *
 *  Created on: Aug 1, 2023
 *      Author: Doğu
 */

#ifndef INC_I2C_SLAVE_H_
#define INC_I2C_SLAVE_H_

#define RxSIZE 1
extern uint8_t RxData[RxSIZE];

void LedLight(uint8_t *Arr);


#endif /* INC_I2C_SLAVE_H_ */
