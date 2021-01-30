int switchR = 5; //Limit switch R
int LEDR = 1;
#define ON   0
#define OFF  1


////RELAY SETUP///////////////////////////////////
//Initialise relay//////////////////////////////
void relay_init(void)//initialize the relay
{  
  //set all the relays OUTPUT
 // pinMode(currentMotor, OUTPUT);
  relay_SetStatus(OFF);//turn off all the relay
}
////////////////////////////////////////////////////

//SET RELAY STATUS///////////////////////////////
   //set the status of relays
void relay_SetStatus( unsigned char status_1)
{
//  digitalWrite(currentMotor, status_1);
 }
 ////////////////////////////////////////////////

//PROGRAM SETUP//////////////////////////////////
void setup() {
  
//pinMode (5,INPUT); //Limit switch R
//pinMode (4,INPUT); //Limit switch Z
//pinMode (3,INPUT); //Limit switch Y
//pinMode (2,INPUT); //Limit switch G
  
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(0,OUTPUT);
   pinMode(1,OUTPUT);
  digitalWrite(A0,INPUT); 
  Serial.begin(9600);
 relay_init();//initialize the relay
    relay_SetStatus(ON);//turn on RELAY_1 

   
}
////////////////////////////////////////////////

///LIMIT SWITCHES/////
/////LIMIT SWITCH R/////
void limitSwitchR(){
  if (digitalRead(switchR == LOW)){ 
       digitalWrite(LEDR,HIGH);
    }
  
  }
//////////////////////

void loop(){
   digitalWrite(LEDR,LOW);
  limitSwitchR();
  
  }
