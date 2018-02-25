/*
 * fades in and out
 */


int ledPin = 11;


void setup() {
	pinMode(ledPin, OUTPUT);
}


void loop() {
	for(int i = 1; i < 100; i++) {
		analogWrite(ledPin, i);
		delay(15);
	}
	for(int j = 100; j > 0; j--) {
		analogWrite(ledPin, j);
		delay(15);
	}

	delay(100);
}
