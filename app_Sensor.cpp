/*
 * app_Sensor.cpp
 *
 *  Created on: 25/01/2019
 *      Author: uidj2522
 */

/* Interfaces */
#include "app_Sensor.h"
#include "app_Transmitter.h"

/* Private Typedef */
typedef enum
{
	DEACTIVATED = 0,
	ACTIVATED
}T_SENSORSTATE;

/* Variables */
unsigned char re_SensorState[APP_SENSOR_N_SENSORS];
unsigned char raub_AnalogSensorPins[APP_SENSOR_N_SENSORS] =
{
		APP_SENSOR_ANALOG_SENSOR1_PIN,
		APP_SENSOR_ANALOG_SENSOR2_PIN,
		APP_SENSOR_ANALOG_SENSOR3_PIN,
		APP_SENSOR_ANALOG_SENSOR4_PIN,
		APP_SENSOR_ANALOG_SENSOR5_PIN,
		APP_SENSOR_ANALOG_SENSOR6_PIN,
};
unsigned char raub_DigitalSensorPins[APP_SENSOR_N_SENSORS] =
{
		APP_SENSOR_DIGITAL_SENSOR1_PIN,
		APP_SENSOR_DIGITAL_SENSOR2_PIN,
		APP_SENSOR_DIGITAL_SENSOR3_PIN,
		APP_SENSOR_DIGITAL_SENSOR4_PIN,
		APP_SENSOR_DIGITAL_SENSOR5_PIN,
		APP_SENSOR_DIGITAL_SENSOR6_PIN,
};

/* Private Prototypes */

/* Functions */

/* **************************
 * Name: app_SensorInit
 * Description: TBD
 * **************************/
void app_SensorInit(void)
{
	unsigned char lub_i;

	/* Set to default state the sensor value */
	for(lub_i = 0u; lub_i < APP_SENSOR_N_SENSORS; lub_i++)
	{
		re_SensorState[lub_i] = DEACTIVATED;
	}
}

/* **************************
 * Name: app_SensorTask
 * Description: TBD
 * **************************/
void app_SensorTask(void)
{
	unsigned char lub_i;
	unsigned char *lub_BlockAddress;

	/* Read All Sensors */
	for(lub_i = 0u; lub_i < APP_SENSOR_N_SENSORS; lub_i++)
	{
		re_SensorState[lub_i] = digitalRead(raub_DigitalSensorPins[lub_i]);
	}

	lub_BlockAddress = re_SensorState;

	/* Send Data */
	app_TransmitterTXBlock(lub_BlockAddress,APP_SENSOR_N_SENSORS);
}
