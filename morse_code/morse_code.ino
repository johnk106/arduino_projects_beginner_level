//a simple code to spell out SOS in morse code 
int ledpin = 10;
void setup() {
  pinMode(ledpin,OUTPUT);

}

void loop() {
  for(int x=0;x<3;x++){
    digitalWrite(ledpin,HIGH);
    delay(150);
    digitalWrite(ledpin,LOW);
    delay(100);
    }
    
    delay(100);
    
   for(int x =0;x<3;x++){
    digitalWrite(ledpin,HIGH);
    delay(150);
    digitalWrite(ledpin,LOW);
    delay(100);
   }

   delay(100);

   for(int x=0;x<3;x++){
    digitalWrite(ledpin,HIGH);
    delay(150);
    digitalWrite(ledpin,LOW);
    delay(100);
   }
    delay(5000);
}
