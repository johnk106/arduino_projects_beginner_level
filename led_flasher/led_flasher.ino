//simple code to flash an LED on and off
int ledpin = 10;
void setup() {
  pinMode(ledpin,OUTPUT);

}

void loop() {
digitalWrite(ledpin,HIGH);
delay(1000);
digitalWrite(ledpin,LOW);
delay(1000);

}
