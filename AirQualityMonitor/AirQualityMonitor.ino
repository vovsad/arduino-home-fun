#include <LiquidCrystal.h>

LiquidCrystal  lcd (8,9,4,5,6,7);

void setup() { 
  lcd.begin(16, 2);
  lcd.clear();
  lcd.write("AIR CTRL MONITOR");
  
}

void loop() {
  for(int i = 0; i < 16; i++){
  lcd.setCursor(i,1);
  lcd.write("_");
  delay(500);
  }
  lcd.setCursor(0,1);
  lcd.write("                ");
}
