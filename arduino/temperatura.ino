// Codigo por Joseluis Gonzalez
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
float value;
int tmp = A1;
void setup(){
  	Serial.begin(9600);
	pinMode(tmp,INPUT);
}

void loop(){
	value = analogRead(tmp)*0.004882814;
  	value = (value - 0.5) * 100.0;
  	lcd.setCursor(0,1);
	lcd.print("Temp:");
  	lcd.print(value);
  	delay(5000);
  	lcd.clear();
	Serial.print(F("Temperatura: "));
  	Serial.print(value);
  	Serial.println(" grados celcius");
}