/*
 * app_Transmitter.cpp
 *
 *  Created on: 25/01/2019
 *      Author: uidj2522
 */

/* Interfaces */
#include "app_Transmitter.h"
#include "RF24.h"

/* Variables */
RF24 ro_Transmitter(7,8);

unsigned char addresses[][6] = {"1Node","2Node"};

/* Functions */
/* **************************
 * Name: app_TransmitterInit
 * Description: TBD
 * **************************/
void app_TransmitterInit(void)
{
	ro_Transmitter.begin();

	// Set the PA Level low to prevent power supply related issues since this is a
	// getting_started sketch, and the likelihood of close proximity of the devices. RF24_PA_MAX is default.
	ro_Transmitter.setPALevel(RF24_PA_LOW);

	ro_Transmitter.openWritingPipe(addresses[1]);
	ro_Transmitter.openReadingPipe(1,addresses[0]);
}

/* **************************
 * Name: app_TransmitterInit
 * Description: TBD
 * **************************/
void app_TransmitterTXBlock(unsigned char *lub_BlockAddress, unsigned lub_blockSize)
{
	/* Ensure that the system is not in receiving mode */
	ro_Transmitter.stopListening();

	ro_Transmitter.write(lub_BlockAddress,lub_blockSize);

	//NOTE: If reception will be needed in this module, after a transmission could be a good option to change to receive mode
}
