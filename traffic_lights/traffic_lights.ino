/*simple code to create a traffic light
  requirements:
  1)LEDs(red,yellow,green)
  2)breadboard
  3)jumper cables
  4)three 150 ohm resistors
 HAVE FUN MODIFYING TE CODE TO ACHIEVE DIFFERENT RESULTS
  */
int redpin = 8;
int yellowpin = 9;
int greenpin = 10;
int leddelay = 3000;

void setup() {
  pinMode(redpin,OUTPUT);
  pinMode(yellowpin,OUTPUT);
  pinMode(greenpin,OUTPUT);

}
void loop() {
 digitalWrite(redpin,HIGH);
 delay(leddelay);
 
 digitalWrite(yellowpin,HIGH);
 delay(2000);
 
 digitalWrite(greenpin,HIGH);
 digitalWrite(redpin,LOW);
 digitalWrite(yellowpin,LOW);
 delay(leddelay);

 digitalWrite(yellowpin,HIGH);
 digitalWrite(greenpin,LOW);
 delay(2000);

 digitalWrite(yellowpin,LOW);
 

}
