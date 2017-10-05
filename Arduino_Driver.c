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
 
//Direction Regg 
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
  digitalWrite(Dir_Rst, HIGH);
  digitalWrite(Pul_Rst, HIGH);
  digitalWrite(Dir_Sh, LOW);
  digitalWrite(Pul_Sh, LOW);
  
}

void loop() {
    digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}


//Pumps the shift registers with the apt signals
void pump(unsigned int pul1,unsigned int pul2,unsigned int pul3,unsigned int pul4,unsigned int pul5,unsigned int pul6,
unsigned int dir1,unsigned int dir2,unsigned int dir3,unsigned int dir4,unsigned int dir5,unsigned int dir6)
{
	//Load Serial Direction
		//Let go of Reset
		digitalWrite(Dir_Rst, LOW);
		shift_Dir(dir1);
		shift_Dir(dir2);
		shift_Dir(dir3);
		shift_Dir(dir4);
		shift_Dir(dir5);
		shift_Dir(dir6);
		//!!!Shift!!!
		digitalWrite(Dir_St,HIGH);
		digitalWrite(Dir_St,LOW);
		
	//Load Serial Pulse
		//Let go of Reset
		digitalWrite(Dir_Rst, LOW);
		shift_Pul(pul1);
		shift_Pul(pul2);
		shift_Pul(pul3);
		shift_Pul(Pul4);
		shift_Pul(pul5);
		shift_Pul(pul6);
		//!!!Store!!!
		digitalWrite(Pul_St,HIGH);
		digitalWrite(Pul_St,LOW);
	
	//Reset Pulse Reg
	digitalWrite(Pul_Rst, HIGH);
	
	//Reset Direction Reg
	digitalWrite(Dir_Rst, HIGH);
}


//Writes to SR
void shift_Dir(unsigned int signal)
{
		if(signal)
				{
					//Set DS to HIGH
					digitalWrite(Dir_DS, HIGH);
					digitalWrite(Dir_DS, LOW);
					//Shift
					digitalWrite(Dir_Sh, HIGH);
					digitalWrite(Dir_Sh, LOW);
				}
		else
		{
				//Just Shift
				digitalWrite(Dir_Sh, HIGH);
				digitalWrite(Dir_Sh, LOW);
		}
}

//Writes to SH
void shift_Pul(unsigned int signal)
{
		if(signal)
				{
					//Set DS to HIGH
					digitalWrite(Pul_DS, HIGH);
					digitalWrite(Pul_DS, LOW);
					//Shift
					digitalWrite(Pul_Sh, HIGH);
					digitalWrite(Pul_Sh, LOW);
				}
		else
		{
				//Just Shift
				digitalWrite(Pul_Sh, HIGH);
				digitalWrite(Pul_Sh, LOW);
		}
}


















