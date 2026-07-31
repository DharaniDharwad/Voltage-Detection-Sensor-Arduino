#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * (5.0 / 1023.0);
  float inputVoltage = voltage * 5.0;

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Voltage:");

  lcd.setCursor(0, 1);
  lcd.print(inputVoltage, 2);
  lcd.print(" V");

  Serial.print("Voltage = ");
  Serial.print(inputVoltage, 2);
  Serial.println(" V");

  delay(500);
}