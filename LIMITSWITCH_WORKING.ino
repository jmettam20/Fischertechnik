

void setup() {
  // put your setup code here, to run once:
pinMode (5,INPUT);
pinMode(1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(5) == LOW){
 digitalWrite(1,HIGH);
  }
  else{
   digitalWrite(1,LOW);
    }
}
