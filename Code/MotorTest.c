const int motor1 = 18;

const int direc1 = 19;

const int motor2 = 20;

const int direc2 = 21;

const int motor3 = 22;

const int direc3 = 23;

const int motor4 = 24;

const int direc4 = 25;

const int motor5 = 26;

const int direc5 = 27;

const int motor6 = 28;

const int direc6 = 29;


int counter = 0;
int clockwise = 0;

void pulseMotor(int pulsePin, int directionPin, int direction)
{
	if(direction == 0)
		digitalWrite(directionPin, LOW);
	else
		digitalWrite(directionPin, HIGH);
	
	digitalWrite(pulsePin,LOW);
	delayMicroseconds(1);
	digitalWrite(pulsePin, HIGH);
	delayMicroseconds(1);
	
}

void setup() {
  
  pinMode(motor1,OUTPUT);
	
  pinMode(direc1, OUTPUT);
	
  pinMode(motor2,OUTPUT);
  pinMode(direc2, OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(direc3, OUTPUT);
  pinMode(motor4,OUTPUT);
  pinMode(direc4, OUTPUT);
  pinMode(motor5,OUTPUT);
  pinMode(direc5, OUTPUT);
  pinMode(motor6,OUTPUT);
  pinMode(direc6, OUTPUT);

}

void loop() {
	if(counter >= 3200)
	{
		counter = 0;
		clockwise = !clockwise;
		
	}
	pulseMotor(motor1, direc1, clockwise);
	pulseMotor(motor2, direc2, clockwise);
	pulseMotor(motor3, direc3, clockwise);
	pulseMotor(motor4, direc4, clockwise);
	pulseMotor(motor5, direc5, clockwise);
	pulseMotor(motor6, direc6, clockwise);
	counter++;
	delayMicroseconds(100);
}




