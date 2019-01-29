/*
 * app_Transmitter.h
 *
 *  Created on: 25/01/2019
 *      Author: uidj2522
 */

#ifndef APP_TRANSMITTER_H_
#define APP_TRANSMITTER_H_

#include <Arduino.h>

/* Public Prototypes */
extern void app_TransmitterInit(void);
extern void app_TransmitterTXBlock(unsigned char *lub_BlockAddress, unsigned lub_blockSize);


#endif /* APP_TRANSMITTER_H_ */
