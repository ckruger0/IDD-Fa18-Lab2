// include the library code:
#include <LiquidCrystal.h>

int inputPin = A5; // potentiometer input
int readValue = 0; // intialize at 0

// LCD Setup
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Lowly Multimeter Lab");
}

void loop() {
  // read the value from potentiometer:
  readValue = analogRead(inputPin);
  lcd.setCursor(0, 1);
  
  // print readValue on LCD
  lcd.print(readValue);
}
