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
/////////////////////////
char val;
int Switch =5;

/////////////////////
///////////////////////
///PULSES////
int PulseCountRP = A0; 
int PulseCountRN = A0; 
int PulseCountZP = A1; 
int PulseCountZN = A1; 
int PulseCountYP = A2; 
int PulseCountYN = A2; 
int PulseCountGP = A3; 
int PulseCountGN = A3;

#define ON   0
#define OFF  1



////RELAY SETUP///////////////////////////////////
//Initialise relay//////////////////////////////
void relay_init(void)//initialize the relay
{  
  //set all the relays OUTPUT
  pinMode(MotorRP, OUTPUT);
    pinMode(MotorRN, OUTPUT);
      pinMode(MotorZP, OUTPUT);
        pinMode(MotorZN, OUTPUT);
          pinMode(MotorYP, OUTPUT);
            pinMode(MotorYN, OUTPUT);
              pinMode(MotorGP, OUTPUT);
                pinMode(MotorGN, OUTPUT);
                 pinMode(Switch,INPUT);
      relay_SetStatus(ON);//turn off all the relay
}
////////////////////////////////////////////////////

//SET RELAY STATUS///////////////////////////////
   //set the status of relays
void relay_SetStatus( unsigned char status_1)
{
  digitalWrite(MotorRP, status_1);
    digitalWrite(MotorRN, status_1);
      digitalWrite(MotorZP, status_1);
        digitalWrite(MotorZN, status_1);
          digitalWrite(MotorYP, status_1);
            digitalWrite(MotorYN, status_1);
              digitalWrite(MotorGP, status_1);
                digitalWrite(MotorGN, status_1);
               
            
 }
 ////////////////////////////////////////////////

//PROGRAM SETUP//////////////////////////////////
void setup() {
  pinMode(Switch,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
    pinMode(A1,INPUT);
      pinMode(A2,INPUT);
        pinMode(A3,INPUT);
  Serial.begin(9600);
 relay_init();//initialize the relay
     relay_SetStatus(OFF);//turn off all the relay

    
}
////////////////////////////////////////////////

//STOP MOTOR//////
void stopMotor(){  
   if (val == 'i'){ 
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      }
}
////////////////////////////////////////////////////



//MoveMotorRP//////
void moveMotorRP(){  
    if (val == 'a'){
      digitalWrite(6,LOW);
    //  moveMotor();
    

    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorRN(){  
    if (val == 'b'){
      digitalWrite(7,LOW);
      moveMotor();
    }

}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorZP(){  
    if (val == 'c'){
      digitalWrite(8,LOW);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorZN(){  
    if (val == 'd'){
      digitalWrite(9,LOW);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorYP(){  
    if (val == 'f'){
      digitalWrite(10,LOW);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorYN(){  
    delay(time);//delay 2s
    if (val == 'e'){
      digitalWrite(11,LOW);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorGP(){  
    delay(time);//delay 2s
    if (val == 'g'){
      digitalWrite(12,LOW);
      moveMotor();
    }
}
////////////////////////////////////////////////////


//MoveMotorRN//////
void moveMotorGN(){  
    delay(time);//delay 2s
    if (val == 'h'){
      digitalWrite(13,LOW);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//void pulseRP(){
// if(val == 'j'){

//void moveMotorRP();
 //  for(int digitalRead(PulseCountRP); PulseCountRP ==75; PulseCountRP++){
 //   if (PulseCountRP == 75){
   //      stopMotor();
    // }
   // }
  // }
  // else{
  //   stopMotor();
  //  }
 // }

///LIMIT SWITCH////
void limitSwitch(){
  
  if (digitalRead(Switch)== LOW){
         digitalWrite(6,HIGH);
      }
  }

  void adjustGP(){
    if (val == 'j'){
            digitalWrite(12,LOW);
            delay(150);
            digitalWrite(12,HIGH);
      }
    }

      void adjustGN(){
    if (val == 'k'){
            digitalWrite(13,LOW);           
            delay(150);
            digitalWrite(13,HIGH);
      }
    }

  void adjustRP(){
    if (val == 'l'){
            digitalWrite(6,LOW);
             delay(150);
            digitalWrite(6,HIGH);
      }
    }

  void adjustRN(){
    if (val == 'm'){
            digitalWrite(7,LOW);
             delay(150);
            digitalWrite(7,HIGH);
      }
    }

      void adjustZP(){
    if (val == 'n'){
            digitalWrite(8,LOW);
             delay(150);
            digitalWrite(8,HIGH);
      }
    }

      void adjustZN(){
    if (val == 'o'){
            digitalWrite(9,LOW);
             delay(150);
            digitalWrite(9,HIGH);
      }
    }

      void adjustYP(){
    if (val == 'p'){
            digitalWrite(10,LOW);
             delay(150);
            digitalWrite(10,HIGH);
      }
    }

      void adjustYN(){
    if (val == 'q'){
            digitalWrite(11,LOW);
             delay(150);
            digitalWrite(11,HIGH);
      }
    }


void funtion(){
if (val == 'r'){
  //OPEN GRIPER//
     digitalWrite(12,LOW);
            delay(2000);
            digitalWrite(12,HIGH);
            ///////////
              delay(500);
/////move forward
 digitalWrite(9,LOW);
 delay(5500);
            digitalWrite(9,HIGH);
 delay(500);
 ////close gripper
                digitalWrite(13,LOW);
            delay(2000);
            digitalWrite(13,HIGH);
            ///////////
              delay(500);
///move back
               digitalWrite(8,LOW);  
                delay(6500);
            digitalWrite(8,HIGH);
            ///////////
              delay(500);

///move down
               digitalWrite(10,LOW);  
                delay(3000);
            digitalWrite(10,HIGH);
            ///////////
              delay(500);
///move forward
               digitalWrite(9,LOW);
 delay(5500);
            digitalWrite(9,HIGH);
 delay(500);
///open gripper
  digitalWrite(12,LOW);
            delay(2000);
            digitalWrite(12,HIGH);
            ///////////
              delay(500);
/////move back
  digitalWrite(8,LOW);  
                delay(6500);
            digitalWrite(8,HIGH);
            ///////////
              delay(500);
///move up
                   digitalWrite(11,LOW);  
                delay(4000);
            digitalWrite(11,HIGH);
            ///////////
              delay(500);
              
 ////close gripper
                digitalWrite(13,LOW);
            delay(2000);
            digitalWrite(13,HIGH);
            ///////////
             if (val == 'i'){ 
stopMotor();
      }
              
}
}

  
//MAIN///////////////////////////////////////////////
void loop() {  
if(Serial.available()){
  val = Serial.read();

funtion();
adjustRN();
adjustRP();
adjustZN();
adjustZP();
adjustYP();
adjustYN();
  adjustGP();
  adjustGN();
moveMotorRP();
moveMotorRN();
moveMotorZP();
moveMotorZN();
moveMotorYP();
moveMotorYN();
moveMotorGP();
moveMotorGN();
    }
else{
   stopMotor();
}
}
/////////////////////////////////////////////////////
