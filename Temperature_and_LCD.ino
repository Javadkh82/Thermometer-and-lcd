#include <LiquidCrystal.h> // include the library code

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600); //setup serial
  float voltage = analogRead(A0);  //read the inpute voltage (analog pin A0)
  float temp = voltage * (0.48828125); //computing Temp
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  float voltage = analogRead(A0);  //read the inpute voltage (analog pin A0)
  float temp = voltage * (0.48828125); //computing Temp
  lcd.print("Temp = "); //show Temp
  lcd.print(temp); //show Temp
  //  lcd.print("\xC2\xB0"); //show Temp
  lcd.println("  *C"); //show Temp
  delay(2000); //waits for 2 second
  lcd.clear();
  lcd.setCursor(0, 0);
}
