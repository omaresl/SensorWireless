/*
 * app_Sensor.h
 *
 *  Created on: 25/01/2019
 *      Author: uidj2522
 */

#ifndef APP_SENSOR_H_
#define APP_SENSOR_H_

#include <Arduino.h>

/* Macros and definitions */

/********PINS Definition***********/
#define APP_SENSOR_ANALOG_SENSOR1_PIN	A0
#define APP_SENSOR_ANALOG_SENSOR2_PIN	A1
#define APP_SENSOR_ANALOG_SENSOR3_PIN	A2
#define APP_SENSOR_ANALOG_SENSOR4_PIN	A3
#define APP_SENSOR_ANALOG_SENSOR5_PIN	A4
#define APP_SENSOR_ANALOG_SENSOR6_PIN	A5

#define APP_SENSOR_DIGITAL_SENSOR1_PIN		0
#define APP_SENSOR_DIGITAL_SENSOR2_PIN		1
#define APP_SENSOR_DIGITAL_SENSOR3_PIN		2
#define APP_SENSOR_DIGITAL_SENSOR4_PIN		3
#define APP_SENSOR_DIGITAL_SENSOR5_PIN		4
#define APP_SENSOR_DIGITAL_SENSOR6_PIN		5

#define APP_SENSOR_N_SENSORS	6u

/* Public Prototypes */
extern void app_SensorInit(void);
extern void app_SensorTask(void);

#endif /* APP_SENSOR_H_ */
