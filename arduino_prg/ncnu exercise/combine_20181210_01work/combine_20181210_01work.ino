
/* 
 DESCRIPTION
 ====================
 Simple example of the Bounce library that switches the debug LED when a button is pressed.
 */
// Include the Bounce2 library found here :
// https://github.com/thomasfredericks/Bounce2
#include <Bounce2.h>

#define BUTTON_PIN 2
#define LED_PIN 13
#define buzzer 5
#define rotate 0
# define redLED 9
# define greenLED 10
# define blueLED 11
// Instantiate a Bounce object
Bounce debouncer = Bounce(); 

void setup() {

  // Setup the button with an internal pull-up :
  initAll();
  pinMode(BUTTON_PIN,INPUT_PULLUP);

  // After setting up the button, setup the Bounce instance :
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); // interval in ms

  //Setup the LED :
  pinMode(LED_PIN,OUTPUT);

}

void loop() {
  // Update the Bounce instance :
  debouncer.update();

  // Get the updated value :
  int value = debouncer.read();

  // Turn on or off the LED as determined by the state :
  if ( value == LOW ) {
    bell(GetRotate());
    delay(2000);
    
  } 
  else {
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
    analogWrite(redLED, 0);
  }
}
  void initAll()
 {
  pinMode(buzzer,OUTPUT);
  digitalWrite(buzzer,LOW);
  pinMode(BUTTON_PIN,INPUT_PULLUP);

  // After setting up the button, setup the Bounce instance :
  debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); // interval in ms

  //Setup the LED :
  pinMode(LED_PIN,OUTPUT);

 } 

 void bell(double t )
 {
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 0);
  analogWrite(redLED, t);
    
    
   
 }

 double GetRotate()
 {
  return (double)analogRead(rotate)/4;
 }


