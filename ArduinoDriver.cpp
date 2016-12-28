#include <AccelStepper.h>

/*
 	AccelStepper (uint8_t interface=AccelStepper::FULL4WIRE, uint8_t pin1=2, uint8_t pin2=3, uint8_t pin3=4, uint8_t pin4=5, bool enable=true)
 
 	AccelStepper (void(*forward)(), void(*backward)())
 
void 	moveTo (long absolute)
 
void 	move (long relative)
 
boolean 	run ()
 
boolean 	runSpeed ()
 
void 	setMaxSpeed (float speed)
 
float 	maxSpeed ()
 
void 	setAcceleration (float acceleration)
 
void 	setSpeed (float speed)
 
float 	speed ()
 
long 	distanceToGo ()
 
long 	targetPosition ()
 
long 	currentPosition ()
 
void 	setCurrentPosition (long position)
 
void 	runToPosition ()
 
boolean 	runSpeedToPosition ()
 
void 	runToNewPosition (long position)
 
void 	stop ()
 
virtual void 	disableOutputs ()
 
virtual void 	enableOutputs ()
 
void 	setMinPulseWidth (unsigned int minWidth)
 
void 	setEnablePin (uint8_t enablePin=0xff)
 
void 	setPinsInverted (bool directionInvert=false, bool stepInvert=false, bool enableInvert=false)
 
void 	setPinsInverted (bool pin1Invert, bool pin2Invert, bool pin3Invert, bool pin4Invert, bool enableInvert)
 
bool 	isRunning ()
*/
