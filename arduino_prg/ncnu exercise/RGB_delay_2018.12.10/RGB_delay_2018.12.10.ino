/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
# define redLED 9
# define greenLED 10
# define blueLED 11
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

}

// the loop function runs over and over again forever
void loop() {
     // turn the LED on (HIGH is the voltage level)
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 0);
  for(int i = 0 ;i<256;i++)
   {
    analogWrite(redLED, i);
    delay(50);
   }
  delay(2000);                       // wait for a second
  analogWrite(redLED, 0);
  analogWrite(blueLED, 0);
  for(int i = 0 ;i<256;i++)
   {
    analogWrite(greenLED, i);
    delay(50);
   }
  delay(2000);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 0);
  for(int i = 0 ;i<256;i++)
   {
    analogWrite(blueLED, i);
    delay(50);
   }
  delay(2000);
  analogWrite(blueLED, 0);
  for(int i = 0 ;i<256;i++)
   {
    analogWrite(greenLED, i);
    analogWrite(redLED, i);
    delay(50);
   }
  delay(2000);
  analogWrite(redLED, 0);
  for(int i = 0 ;i<256;i++)
   {
    analogWrite(greenLED, i);
    analogWrite(blueLED, i);
    delay(50);
   }
  delay(2000);
  analogWrite(greenLED, 0);
  for(int i = 0 ;i<256;i++)
   {
    analogWrite(blueLED, i);
    analogWrite(redLED, i);
    delay(50);
   } 
  delay(2000);
  //digitalWrite(redLED, LOW);   // turn the LED on (HIGH is the voltage level)
  //analogWrite(greenLED, HIGH);
  //analogWrite(blueLED, LOW);
  //delay(2000);
  //analogWrite(redLED, LOW);   // turn the LED on (HIGH is the voltage level)
  //analogWrite(greenLED, LOW);
  //analogWrite(blueLED, HIGH);
  //delay(2000);
  //analogWrite(redLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  //analogWrite(greenLED, HIGH);
  //analogWrite(blueLED, LOW);
  //delay(2000);
  //analogWrite(redLED, LOW);   // turn the LED on (HIGH is the voltage level)
  //analogWrite(greenLED, HIGH);
  //analogWrite(blueLED, HIGH);
  //delay(2000);
  //analogWrite(redLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  //analogWrite(greenLED, LOW);
  //analogWrite(blueLED, HIGH);
  //delay(2000);
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);                       // wait for a second
}
