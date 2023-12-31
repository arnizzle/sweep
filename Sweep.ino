/* Blink without Delay
 
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 
 This example code is in the public domain.

 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to 
// set pin numbers:
const int ledPin =  26;      // the number of the LED pin

// Variables will change:
int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1500;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);   
  digitalWrite(ledPin, LOW);
}

void loop()
{

  // First very simple
  digitalWrite(ledPin, HIGH);
  delay(interval);

  digitalWrite(ledPin, LOW);
  delay(interval);


//   // Check current milli seconds
//   unsigned long currentMillis = millis();

//   // Check if Current - Previous > interval
  
//   if(currentMillis - previousMillis > interval) {
//     // save the last time you blinked the LED 
//     previousMillis = currentMillis;   

//     // if the LED is off turn it on and vice-versa:
//     if (ledState == LOW)
//       ledState = HIGH;
//     else
//       ledState = LOW;

//     digitalWrite(ledPin, ledState); // set the LED with the ledState of the variable:

//   //  ledState == LOW ? ledState = HIGH : ledState = LOW; //  Ternary 
//   //  digitalWrite(ledPin, ledState); // set the LED with the ledState of the variable:
  
  
// //    digitalWrite(ledPin, digitalRead(ledPin) ? LOW : HIGH); // One liner
//   }
}
