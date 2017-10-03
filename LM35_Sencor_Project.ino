#include "Arduino.h"

int pot = 0;
int reading = 0;
int tempC = 0;
int pin13 = 13;
int pin12 = 12;
int pin11 = 11;
int pin10 = 10;

void setup() {
	Serial.begin(9600);
	analogReference(INTERNAL);
	pinMode(pin13, OUTPUT);
	pinMode(pin12, OUTPUT);
	pinMode(pin11, OUTPUT);
	pinMode(pin10, OUTPUT);
}

void loop() {
	reading = analogRead(pot);
	tempC = reading / 9.31l;
	Serial.println(tempC);
	delay(1000);
		if (tempC <= 10) {
			digitalWrite(pin10, HIGH);
			delay(1000);
			digitalWrite(pin10, LOW);
			delay(1000);
		} else if (tempC > 10 && tempC <= 20) {
			digitalWrite(pin11, HIGH);
			delay(1000);
			digitalWrite(pin11, LOW);
			delay(1000);
		} else if (tempC > 20 && tempC <= 30) {
			digitalWrite(pin12, HIGH);
			delay(1000);
			digitalWrite(pin12, LOW);
			delay(1000);
		} else if (tempC > 30 && tempC <= 40) {
			digitalWrite(pin13, HIGH);
			delay(1000);
			digitalWrite(pin13, LOW);
			delay(1000);
		}
}
