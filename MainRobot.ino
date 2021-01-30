//VARIABLES/////////
//Motor Pins////////
int MotorRP = 6; //R+
int MotorRN = 7; //R-
int MotorZP = 8; //Z+
int MotorZN = 9; //Z-
int MotorYP = 10; //Y+
int MotorYN = 11; //Y-
int MotorGP = 12; //G+
int MotorGN = 13; //G-
int currentMotor = MotorRP;
int time = 2000; 
int motorRPbtn = 0;
int val = 0;
/////////////////////
///////////////////////


#define ON   0
#define OFF  1



////RELAY SETUP///////////////////////////////////
//Initialise relay//////////////////////////////
void relay_init(void)//initialize the relay
{  
  //set all the relays OUTPUT
  pinMode(currentMotor, OUTPUT);
  relay_SetStatus(OFF);//turn off all the relay
}
////////////////////////////////////////////////////

//SET RELAY STATUS///////////////////////////////
   //set the status of relays
void relay_SetStatus( unsigned char status_1)
{
  digitalWrite(currentMotor, status_1);
 }
 ////////////////////////////////////////////////

//PROGRAM SETUP//////////////////////////////////
void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
 relay_init();//initialize the relay
    relay_SetStatus(ON);//turn on RELAY_1 
}
////////////////////////////////////////////////


//MoveMotor//////
void moveMotor(){  
  delay(time);//delay 2s
}
////////////////////////////////////////////////////

//MAIN///////////////////////////////////////////////
void loop() {
  if(Serial.available()){
  val = Serial.read();
    }

    if (val == '1'){
      digitalWrite(6,HIGH);
      
      moveMotor();

          if (val == '2'){
      digitalWrite(7,HIGH);
      
      moveMotor();
      
     
      }
 
    }}
/////////////////////////////////////////////////////
