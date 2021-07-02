/*code to simulate an LED chase effect
requirements:
10 red LEDs
10 current limiting resistors
breadboard
connecting wires

*/
byte ledpin[] = {4,5,6,7,8,9,10,11,12,13};
int ledDelay = 65;
int direction = 1;
int currentLED = 0;
unsigned long changeTime;
void setup() {
  for(int x=0;x<10;x++){
    pinMode(ledpin[x],OUTPUT);
  }
  changeTime = millis();

}

void loop() {
  if((millis()-changeTime) > ledDelay){
    changeLED();
    changeTime = millis();
  }

}
void changeLED(){
  //turn off all LEDs
  for(int x =0;x<10;x++){
    digitalWrite(ledpin[x],LOW);
  }
  //turn on the current LED
  digitalWrite(ledpin[currentLED],HIGH);
  //increment by the direction
  currentLED += direction;
//change direction when we reach the end
   if(currentLED == 9){direction = -1;}
   if(currentLED == 0){direction = -1;}
}
