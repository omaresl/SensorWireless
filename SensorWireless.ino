#include "Arduino.h"
#include "app_Sensor.h"
#include "app_Transmitter.h"
//The setup function is called once at startup of the sketch
void setup()
{
// Add your initialization code here
	app_SensorInit();
	app_TransmitterInit();
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here
	app_SensorTask();
}
