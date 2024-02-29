#include <LiquidCrystal.h>
#include <Servo.h>

Servo servo1;

LiquidCrystal lcd(13, 12, 5, 4, 3, 2);

int botao1, botao2;

void setup()
{
  servo1.attach(6);
  lcd.begin(16, 2);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  servo1.write(0);
}

void loop()
{
 
  botao1 = digitalRead(7);
  botao2 = digitalRead(8);
  
  if(botao1 == HIGH){
  	lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("BOTAO 1");
    lcd.setCursor(0, 1);
    lcd.print("POS. 180 GRAUS");
  	servo1.write(180);
    botao1 = LOW;
  }
  
  if(botao2 == HIGH){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("BOTAO 2");
    lcd.setCursor(0, 1);
    lcd.print("ORIGEM 0 GRAUS");
  	servo1.write(0);
    botao2 = LOW;
  }
}