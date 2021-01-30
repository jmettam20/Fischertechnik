//Function to move motor R in one direction//////
void moveRP(){
  
  relay_SetStatus(ON);//turn on RELAY_1 
  delay(2000);//delay 2s

void relay_init(void)//initialize the relay
{  
  //set all the relays OUTPUT
  pinMode(IN1, OUTPUT);
  relay_SetStatus(OFF);//turn off all the relay
}
  
  //set the status of relays
void relay_SetStatus( unsigned char status_1)
{
  digitalWrite(IN1, status_1);
 }
  
}
