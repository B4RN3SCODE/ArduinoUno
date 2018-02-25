/*
 * BlinkingLight
 *
 * Makes the fucking light blink
 *
 * @author		Tyler J Barnes
 * @contact		tbarnes.code@gmail.com
 */




int ledpin=11;            //definition digital 11 pins as pin to control the LED
int btnpin=2;             //Set the digital 2 to button interface
volatile int state = LOW; //Defined output status LED Interface

void setup()
{
  pinMode(ledpin, OUTPUT);                  //Set digital 11 port mode, the OUTPUT for the output
  attachInterrupt(0, stateChange, FALLING); //Monitoring Interrupt 0 (Digital PIN 2) changes in the input pins FALLING
}
void loop()
{
  digitalWrite(ledpin, state);              //Output control status LED, ON or OFF
}
void stateChange()                          //Interrupt function
{
  if(digitalRead(btnpin)==LOW)              //Detection button interface to low
  {

      delayMicroseconds(10000);             //Delay 10ms for the elimination of key leading-edge jitter
      if(digitalRead(btnpin)==LOW)          //Confirm button is pressed
      {
          state = !state;                   //Negate operation, each time you run the program here, state the HGIH becomes LOW, or the state becomes the LOW HGIH.
      }
   }
}






// pin on circuit
//int ledPin = 8;

//// buzzer pin
//int buzzPin = 7;

//int btnPin = 2;

//volatile int state = LOW;

////int delaySec = 1000;
////int dec = 100;
////int minSec = 50;

///* set up */
//void setup() {
	//pinMode(ledPin, OUTPUT);
	//pinMode(buzzPin, OUTPUT);
	//pinMode(btnPin, INPUT);
//}



///* loop function */
//void loop() {

	//if(digitalRead(btnPin) == LOW) {
		//delay(10);
		//if(digitalRead(btnPin) == LOW) {
			//while(digitalRead(btnPin) == LOW);
			//delay(10);
			//while(digitalRead(btnPin) == LOW);
			//state = !state;
			//digitalWrite(ledPin, state);
			//digitalWrite(buzzPin, state);
		//}
	//}




///*

	//digitalWrite(ledPin, HIGH);
	////digitalWrite(buzzPin, HIGH);
	//delay(delaySec);

	//digitalWrite(ledPin, LOW);
	////digitalWrite(buzzPin, LOW);
	//delay(delaySec);

	//if(delaySec <= minSec) {
		//delaySec = 1000;
	//} else {
		//delaySec -= dec;
	//}

//*/

//}
