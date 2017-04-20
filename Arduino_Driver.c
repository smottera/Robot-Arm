#define DISTANCE 3200

const int Dir_DS = 2;
const int Dir_Sh = 3;
const int Dir_St = 4;
const int Dir_Rst = 5;

const int Pul_DS = 6;
const int Pul_Sh = 7;
const int Pul_St = 8;
const int Pul_Rst = 9;

void setup() {                
 
//Direction Reg 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
//Pulse Reg
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);  
  
  //Initialize Regs
  digitalWrite(Dir_Rst, LOW);
  digitalWrite(Pul_Rst, LOW);
  
}

void loop() {
    digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void pump(pul1,pul2,pul3,pul4,pul5,pul6,dir1,dir2,dir3,dir4,dir5,dir6)
{
	//Load Serial Direction

	//Load Serial Pulse
	
	//Reset Pulse Reg
	
	//Reset Direction Reg
}