#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int delayTime=800;
int i;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print(" Hi Anbu Pa");
lcd.setCursor(0,1);
lcd.print(" The homework is done");
for (i = 1 ; i <= 16; i=i+1) {
      lcd.scrollDisplayLeft(); 
      delay(delayTime);
  }
lcd.clear();
}
