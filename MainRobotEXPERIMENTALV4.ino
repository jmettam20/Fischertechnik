//VARIABLES/////////
//Motor Pins////////
int switchZ = 4; //Limit switch Z
int switchY = 3; //Limit switch Y
int switchG = 2; //Limit switch G


int MotorRP = 6; //R+
int MotorRN = 7; //R-
int MotorZP = 8; //Z+
int MotorZN = 9; //Z-
int MotorYP = 10; //Y+
int MotorYN = 11; //Y-
int MotorGP = 12; //G+
int MotorGN = 13; //G-
int currentMotor = MotorRP;
int time = 20; 
int motorRPbtn = 0;
int val = 0;
int current = digitalRead(LOW);
bool state; 
int pulseCountR = A0;
int rotations; 
int pulseCounterR; 



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
  
pinMode (5,INPUT); //Limit switch R
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

//MoveMotor//////
void moveMotor(){  
  delay(time);//delay 2s
}
////////////////////////////////////////////////////



/////ROTARY ENCODER///////
//void rotaryEncoder(){
//if(pulseCountR == HIGH){//if a signal from the rotary encoder is recived 
  //pulseCounterR == pulseCounterR +1; //add 1 to pulseCountR
//digitalWrite(0,HIGH);
//delay(5);
//digitalWrite(0,LOW);
  
 // if(pulseCounterR == 25){//if pulseCountR resaches 25(one rotation)
//rotations == rotations +1;//add 1 to the rtations variable 
//pulseCounterR ==0;  //set pulseCountR back to 0
//digitalWrite(1,HIGH);
//delay(5);
//digitalWrite(1,LOW);
//}
//  }
//}
/////////////////////////

//STOP MOTOR//////
void stopMotor(){  
   if (val == '2'){ 
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);
      }
}
////////////////////////////////////////////////////




//MoveMotorRP//////
void moveMotorRP(){  
    if (val == '1'){
      digitalWrite(6,HIGH);
      moveMotor();
    

    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorRN(){  
    if (val == '3'){
      digitalWrite(7,HIGH);
      moveMotor();
    }

}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorZP(){  
    if (val == '4'){
      digitalWrite(8,HIGH);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorZN(){  
    if (val == '5'){
      digitalWrite(9,HIGH);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorYP(){  
    if (val == '6'){
      digitalWrite(10,HIGH);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorYN(){  
    delay(time);//delay 2s
    if (val == '7'){
      digitalWrite(11,HIGH);
      moveMotor();
    }
}
////////////////////////////////////////////////////

//MoveMotorRN//////
void moveMotorGP(){  
    delay(time);//delay 2s
    if (val == '8'){
      digitalWrite(12,HIGH);
      moveMotor();
    }
}
////////////////////////////////////////////////////


//MoveMotorRN//////
void moveMotorGN(){  
    delay(time);//delay 2s
    if (val == '9'){
      digitalWrite(13,HIGH);
      moveMotor();
        }
        }
   

////////////////////////////////////////////////////



 // int Switch(){
 //           if (digitalRead(5) == LOW ){ 
 //     digitalWrite(6,HIGH);
 //     digitalWrite(1,HIGH);
 // }
 // else{
 //    digitalWrite(6,LOW);
 //     digitalWrite(1,LOW);
 //   }
//}


//MAIN///////////////////////////////////////////////
void loop() {
 
  
  if(Serial.available()){
  val = Serial.read();

//int Switch();
 
moveMotorRP();
moveMotorRN();
moveMotorZP();
moveMotorZN();
moveMotorYP();
moveMotorYN();
moveMotorGP();
moveMotorGN();
 stopMotor();

 if (digitalRead(5) == LOW){
   digitalWrite(1,HIGH);
   val == 2; 
    }
     else{
       digitalWrite(1,LOW);
     }
      }

    }




       
 


 
          
         

/////////////////////////////////////////////////////
