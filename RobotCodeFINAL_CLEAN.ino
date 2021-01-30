//VARIABLES/////////
//Motor Pins////////
int MotorRP = 6; //R+ - Clockwise
int MotorRN = 7; //R- - Anticlockwise
int MotorZP = 8; //Z+ - Up
int MotorZN = 9; //Z- - Down
int MotorYP = 10; //Y+ - Forward
int MotorYN = 11; //Y- - Backward
int MotorGP = 12; //G+ - Open gripper
int MotorGN = 13; //G- - Close Gripper 
/////////////////////////
char val; // stores value recived from processing 
/////////////////////
#define ON   1 //can be used to set relay to on
#define OFF  0//can be used to set relay to off

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
      relay_SetStatus(OFF);//turn off all the relays
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
  //Set output pins///
  pinMode(MotorRP,OUTPUT);
  pinMode(MotorRN,OUTPUT);
  pinMode(MotorZP,OUTPUT);
  pinMode(MotorZN,OUTPUT);
  pinMode(MotorYP,OUTPUT);
  pinMode(MotorYN,OUTPUT);
  pinMode(MotorGP,OUTPUT);
  pinMode(MotorGN,OUTPUT);
  //////////////////
////Serial setup///
  Serial.begin(9600);
  /////////////
  //RelaySetup/////
 relay_init();//initialize the relay
     relay_SetStatus(ON);//turn off all the relay
///////////////////////////////////   
}
////////////////////////////////////////////////

//STOP MOTOR//////
void stopMotor(){  
   if (val == 'i'){ /// If i is recived 
    ///Turn all relays off///
   digitalWrite(MotorRP,HIGH);
   digitalWrite(MotorRN,HIGH);
   digitalWrite(MotorZP,HIGH);
   digitalWrite(MotorZN,HIGH);
   digitalWrite(MotorYP,HIGH);
   digitalWrite(MotorYN,HIGH);
   digitalWrite(MotorGP,HIGH);
      digitalWrite(MotorGN,HIGH);
      }
}
////////////////////////////////////////////////////



//MoveMotorRP//////
void moveMotorRP(){  
    if (val == 'a'){///if a is recived
      digitalWrite(MotorRP,LOW);//turn on motorRP
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorRN(){  
    if (val == 'b'){//if b is recived
      digitalWrite(MotorRN,LOW);//turn on motorRN
     
    }

}
////////////////////////////////////////////////////

//MoveMotorZP//////
void moveMotorZP(){  
    if (val == 'c'){//if c is recived
      digitalWrite(MotorZP,LOW);//Turn on motorZP
    }
}
////////////////////////////////////////////////////

//MoveMotorZN//////
void moveMotorZN(){  
    if (val == 'd'){//if d is recived
      digitalWrite(MotorZN,LOW);//turn on motorZN
    }
}
////////////////////////////////////////////////////

//MoveMotorYP//////
void moveMotorYP(){  
    if (val == 'f'){//if f is recived
      digitalWrite(MotorYP,LOW);//turn motorYP on
    }
}
////////////////////////////////////////////////////

//MoveMotorYN//////
void moveMotorYN(){  
  
    if (val == 'e'){//if e is recived 
      digitalWrite(MotorYN,LOW);///Turn on motorYN
    }
}
////////////////////////////////////////////////////

//MoveMotorGP//////
void moveMotorGP(){  
  
    if (val == 'g'){//if g is recived
      digitalWrite(MotorGP,LOW);//turn on motorGP
    }
}
////////////////////////////////////////////////////


//MoveMotorGN//////
void moveMotorGN(){  
    if (val == 'h'){//if h is recived
      digitalWrite(MotorGN,LOW);//turn on motorGN
    }
}
////////////////////////////////////////////////////

//pulse motorGP
  void adjustGP(){
    if (val == 'j'){//if j is recived
            digitalWrite(MotorGP,LOW);//turn on motorGP
            delay(150);//wait 0.15s
            digitalWrite(MotorGP,HIGH);//turn off motorGP
      }
    }
/////////////////////
///Pulse motorGN////
      void adjustGN(){
    if (val == 'k'){//if k is recived
            digitalWrite(MotorGN,LOW);  //turn on motorGN         
            delay(150);//wait 0.15s
            digitalWrite(MotorGN,HIGH);//turn off motorGN
      }
    }
/////////
////Pulse motorRP////
  void adjustRP(){
    if (val == 'l'){
            digitalWrite(MotorRP,LOW);//turn on motorRP
             delay(150);//wait 0.15s
            digitalWrite(MotorRP,HIGH);//turn off motorRP
      }
    }
///////////////
//Pulse motorRN////
  void adjustRN(){
    if (val == 'm'){
            digitalWrite(MotorRN,LOW);//turn on motorRN
             delay(150);//wait 0.15s
            digitalWrite(MotorRN,HIGH);//turn off motorRN
      }
    }
/////////
////Pulse motor ZP////
      void adjustZP(){
    if (val == 'n'){
            digitalWrite(MotorZP,LOW);//turn on motorZP
             delay(150);//wait 0.15s
            digitalWrite(MotorZP,HIGH);//turn off motorZP
      }
    }
/////////////////
///pulse motorZN//////
      void adjustZN(){
    if (val == 'o'){
            digitalWrite(MotorZN,LOW);//turn on motorZN
             delay(150);//wait 0.15s
            digitalWrite(MotorZN,HIGH);//turn off motorZN
      }
    }
/////////////
////pulse motorYP///////
      void adjustYP(){
    if (val == 'p'){
            digitalWrite(MotorYP,LOW);//turn on motorYP
             delay(150);//wait 0.15s
            digitalWrite(MotorYP,HIGH);//turn off motorYP
      }
    }
///////////////
//////pulse motorYN//////////
      void adjustYN(){
    if (val == 'q'){
            digitalWrite(MotorYN,LOW);//turn on motorYN
             delay(150);//wait 0.15s
            digitalWrite(MotorYN,HIGH);//turn off motorYN
      }
    }
//////////////////////

///Pick and place block function/// 
void funtion(){
if (val == 'r'){//if r is recived
  //OPEN GRIPER//
     digitalWrite(MotorGP,LOW);//turn on motorGP
            delay(2000);//wait 2 seconds 
            digitalWrite(MotorGP,HIGH);//turn off motorGP
            ///////////
              delay(500);///wait 0.05seconds
/////move forward
 digitalWrite(MotorZN,LOW);//turn on motorZN
 delay(5500);//wait 5.5 seconds 
            digitalWrite(MotorZN,HIGH);//turn off motorZN
 delay(500);//wait 0.05seconds
 ////close gripper
                digitalWrite(MotorGN,LOW);//turn on motorGN
            delay(2000);//wait 2 seconds 
            digitalWrite(MotorGN,HIGH);//turn off motorGN
            ///////////
              delay(500);//wait 0.05seconds
///move back
               digitalWrite(MotorZP,LOW);  ///turn on motorZP
                delay(6500);// wait 6.5 seconds
            digitalWrite(MotorZP,HIGH);///turn off motorZP
            ///////////
              delay(500);//wait 0.05seconds

///move down
               digitalWrite(MotorYP,LOW);  //turn on motorYP
                delay(3000);//wait 3 seconds 
            digitalWrite(MotorYP,HIGH);//turn off motorYP
            ///////////
              delay(500);//wait 0.05seconds
///move forward
               digitalWrite(MotorZN,LOW);//turn on motorZN
 delay(5500);//wait 5.5 seconds
            digitalWrite(MotorZN,HIGH);//turn off motorZN
 delay(500);//wait 0.05seconds
///open gripper
  digitalWrite(MotorGP,LOW);//turn on motorGP
            delay(2000);//wait 2 seconds 
            digitalWrite(MotorGP,HIGH);//turn off motorGP
            ///////////
              delay(500);//wait 0.05seconds
/////move back
  digitalWrite(MotorZP,LOW);  //turn on motorZP
                delay(6500);//wait 6.5 seconds 
            digitalWrite(MotorZP,HIGH);//turn off motorZP
            ///////////
              delay(500);//wait 0.05seconds
///move up
                   digitalWrite(MotorYN,LOW);  //turn on motorYN
                delay(4000);//wait 4 seconds 
            digitalWrite(MotorYN,HIGH);//turn off motorYN
            ///////////
              delay(500);//wait 0.05seconds
              
 ////close gripper
                digitalWrite(MotorGN,LOW);//turn on motorGN
            delay(2000);//wait 2 seconds 
            digitalWrite(MotorGN,HIGH);//turn off motorGN
            ///////////
             if (val == 'i'){ //if i is recived 
stopMotor();//call stopMotor function
      }            
}
}
 
//MAIN///////////////////////////////////////////////
void loop() {  
if(Serial.available()){///if theres a serial port available 
  val = Serial.read();///read data sent to the Serial port
///Call functions 
//functions to move and pulse motors 
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
////
    }
else{///else
   stopMotor();///stop all motors 
}
}
/////////////////////////////////////////////////////
