#include "Arduino.h"

	int pot 		=	0;
	int pot1		=	5;
	int value		=	0;
	int reading 	= 	0;
	float tempC 	= 	0;
	int pin13 		= 	13;
	int pin12 		=	12;
	int pin11 		= 	11;
	int pin10 		= 	10;
	int buttonPint	=	8;
	int buttonInput	=	0;

void setup() {
	Serial.begin(9600);
	analogReference(INTERNAL);
	pinMode(pin13, OUTPUT);
	pinMode(pin12, OUTPUT);
	pinMode(pin11, OUTPUT);
	pinMode(pin10, OUTPUT);
	pinMode(buttonPint, INPUT);
}

void loop() {
	buttonInput	=	digitalRead(buttonPint );
	reading = analogRead(pot);
	tempC = reading /9.31;
	value	=	analogRead(A5);
	Serial.println(tempC);

		if(buttonInput	==	HIGH){

		if (tempC <= 10) {
			digitalWrite(pin10, HIGH);
			delay(value);
			digitalWrite(pin10, LOW);
			delay(value);

		} else if (tempC > 10 && tempC <= 20) {
			digitalWrite(pin11, HIGH);
			delay(value);
			digitalWrite(pin11, LOW);
			delay(value);


		} else if (tempC > 20 && tempC <= 30) {
			digitalWrite(pin12, HIGH);
			delay(value);
			digitalWrite(pin12, LOW);
			delay(value);

		} else if (tempC > 30 && tempC <= 40) {
			digitalWrite(pin13, HIGH);
			delay(value);
			digitalWrite(pin13, LOW);
			delay(value);


		}
		}
}
