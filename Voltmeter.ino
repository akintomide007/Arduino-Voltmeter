//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Voltmeter
// 
// Made by wahmedwd3 wahmedwd3
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/5296800-voltmeter

#include <LiquidCrystal.h>
//Create an instance of the library with the interface pins being used 
LiquidCrystal lcd(12,11,5,4,3,2);

float voltage;
float temp; 
int analogValue;
float r1=1000000.0;   //1 Mohm
float r2=10000.0;     //10 kOhm

void setup() {
  //Turn on the LCD and initliaze columns and rows 
  lcd.begin(16, 2);
}

void loop() {
  //Read value from A0 analog pin
  analogValue = analogRead(A0);
  //Convert analog value from a range of 0-1203 to 0-5
  //NOTE: Arduino analog maximum input voltage is 5V 
  temp = (analogValue* 5.0)/1024.0;
  // 1:100 (10kOhm:1Mohm) voltage divider used to increase voltage range  
  //Voltage divider equation used to convert voltage received to input voltage
  voltage = temp / (r2/(r1+r2));
  
  //Print voltage to LCD
  lcd.setCursor(0,0);
  lcd.print("Voltage: ");
  lcd.print(voltage);
  lcd.print(" V");
  delay(1000);
  
}
