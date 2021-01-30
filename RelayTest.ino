int pinR1 = 6;
int pinR2 = 7;

void setup() {
  pinMode(pinR1, OUTPUT);
    pinMode(pinR2, OUTPUT);
    
}
void loop() {
  digitalWrite(pinR1, HIGH);
     digitalWrite(pinR2, LOW);
     delay (10000);

}
