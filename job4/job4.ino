// C++ code
//
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0, 1, 10, 11, 12, 13);
int button_pin =  7;
int button_state = 0;
int counter = 0;
int status = 0;


void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("ARDUINO");
  
  button_state = digitalRead(button_pin);
  
  if (button_state == 1) {
    
    if (status == 0) {
    	status = 1;
    }else {
    	status = 0;
    }
  }
  
  if (status == 1) {
    counter++;  
  }
  
  lcd.setCursor(0, 1);
  lcd.println(counter);
  delay(1000);
}