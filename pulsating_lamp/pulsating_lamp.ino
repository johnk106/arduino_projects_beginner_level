/*
after uploading the following code the LED should pulsate on and off steadily 
requirements:
green difffused 5mm LED or any other LED at your disposal
current limiting resistor
breadboard
jump cables
*/

int ledPin = 11;
float sinVal;
int ledVal;
void setup() {
  pinMode(ledPin,OUTPUT);

}
void loop() {
  for(int x = 0;x<180;x++){
    //convert degrees to radians then obtain the sin value
    sinVal = (sin(x*(3.1412/180)));
    ledVal = int(sinVal*255);
    analogWrite(ledPin,ledVal);
    delay(25);
  }

}
