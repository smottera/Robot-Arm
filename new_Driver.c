const int ppul1 = 22;
const int ppul2 = 24;
const int ppul3 = 26;
const int ppul4 = 28;
const int ppul5 = 30;
const int ppul6 = 32;

const int pdir1 = 23;
const int pdir2 = 25;
const int pdir3 = 27;
const int pdir4 = 29;
const int pdir5 = 31;
const int pdir6 = 33;

void setup()
{

pinMode(22, OUTPUT);
pinMode(23, OUTPUT);
pinMode(24, OUTPUT);
pinMode(25, OUTPUT);
pinMode(26, OUTPUT);
pinMode(27, OUTPUT);
pinMode(28, OUTPUT);
pinMode(29, OUTPUT);
pinMode(30, OUTPUT);
pinMode(31, OUTPUT);
pinMode(32, OUTPUT);
pinMode(33, OUTPUT);

}

void loop()
{

}

void pump(unsigned int pul1, unsigned int dir1, unsigned int pul2, unsigned int dir2, unsigned int pul3, unsigned int dir3, unsigned int pul4, unsigned int dir4, unsigned int pul5, unsigned int dir5, unsigned int pul6, unsigned int dir6,)
{
		digitalWrite(pdir1, LOW);
		if(dir1) digitalWrite(pdir1,HIGH);
		digitalWrite(ppul1, LOW);
		if(pul1) digitalWrite(ppul1,HIGH);
		
		digitalWrite(pdir2, LOW);
		if(dir2) digitalWrite(pdir1,HIGH);
		digitalWrite(ppul2, LOW);
		if(pul2) digitalWrite(ppul2,HIGH);
		
		digitalWrite(pdir3, LOW);
		if(dir3) digitalWrite(pdir3,HIGH);
		digitalWrite(ppul3, LOW);
		if(pul3) digitalWrite(ppul3,HIGH);
		
		digitalWrite(pdir4, LOW);
		if(dir4) digitalWrite(pdir4,HIGH);
		digitalWrite(ppul4, LOW);
		if(pul4) digitalWrite(ppul4,HIGH);
		
		digitalWrite(pdir5, LOW);
		if(dir5) digitalWrite(pdir5,HIGH);
		digitalWrite(ppul5, LOW);
		if(pul5) digitalWrite(ppul5,HIGH);
		
		digitalWrite(pdir6, LOW);
		if(dir6) digitalWrite(pdir6,HIGH);
		digitalWrite(ppul6, LOW);
		if(pul6) digitalWrite(ppul6,HIGH);

}
