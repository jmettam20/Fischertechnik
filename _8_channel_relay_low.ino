//the relays connect to
int IN1 = 6; //R+
int IN2 = 7;//R-
int IN3 = 8;//Y+
int IN4 = 9;//Y-
int IN5 = 10;//Z+
int IN6 = 11;//Z-
int IN7 = 12;//G+
int IN8 = 13;//G-

#define ON   0
#define OFF  1

void setup() 
{
  relay_init();//initialize the relay
}

void loop() {

  relay_SetStatus(ON, OFF);//turn on RELAY_1 
  delay(2000);//delay 2s
  relay_SetStatus(OFF, ON);//turn on RELAY_2
  delay(2000);//delay 2s
}
void relay_init(void)//initialize the relay
{  
  //set all the relays OUTPUT
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
 
  relay_SetStatus(OFF,OFF);//turn off all the relay
}
//set the status of relays
void relay_SetStatus( unsigned char status_1,  unsigned char status_2)
{
  digitalWrite(IN1, status_1);
  digitalWrite(IN2, status_2);
 

}
