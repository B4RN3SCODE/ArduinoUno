
/*
 *
 * Displays shit on to the LCD screen
 */

#include <LiquidCrystal.h>

char text[] = "America fuck yeah coming to save the mother fucking day yeah";

LiquidCrystal lcd(4, 6, 10, 11, 12, 13);

void setup() {
	lcd.begin(16, 1);
}

void loop() {
	lcd.clear();
	lcd.setCursor(15,0);
	for(int c = 0; c < strlen(text); c++) {
		lcd.scrollDisplayLeft();
		lcd.print(text[c]);
		delay(500);
	}
	delay(1000);
}
