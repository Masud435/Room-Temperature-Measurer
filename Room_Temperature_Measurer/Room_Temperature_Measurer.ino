#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 8, 4, 3, 2, 1);
int tempPin = 0;
void setup()
{
lcd.begin(16,2);
lcd.setCursor(5,0);
lcd.print("WELCOME");
lcd.setCursor(3,1);
lcd.print("TEAM:PROLOG");
delay(700);
}
void loop()
{
int temp = analogRead(tempPin);
temp = (temp / 1023.0)* 5000;
float cel = temp/10;
float far = ((cel*9)/5+32);
lcd.clear();
lcd.setCursor(0,0);
lcd.print(cel);
lcd.print(char(223));
lcd.print("C");
lcd.setCursor(9,0);
lcd.print(far);
lcd.print(char(223));
lcd.print("F");
lcd.setCursor(3,1);
lcd.print("TEAM:PROLOG");
delay(1000);
}

