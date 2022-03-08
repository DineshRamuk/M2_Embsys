#include <LiquidCrystal.h>
const int buttonPin1 = 2, buttonPin2 = 3;    
int button1_State = 0, button2_State = 0;
int count_value =0;
int prestate =0;
const int rs = 12, en = 11, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
const int relay=8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(relay,OUTPUT);
  //lcd.init();
  //lcd.backlight();
  lcd.setCursor(4,0);
  lcd.print("Counter");
  lcd.setCursor(2,1);
  lcd.print(count_value);
}

void loop() {
  // read the state of the pushbutton value:
  button1_State = digitalRead(buttonPin1);
  button2_State = digitalRead(buttonPin2);
  if (button1_State == HIGH && prestate == 0) {
    count_value++;  
  lcd.setCursor(0,1);
  lcd.print("> ");
  lcd.print(count_value);
  lcd.print(" ");
    prestate = 1;
    
  }
  else if (button2_State == HIGH && prestate == 0) {
    count_value--;
  lcd.setCursor(0,1);
  lcd.print("< ");
  lcd.print(count_value);
  lcd.print(" ");
   prestate = 1;
  } 
 else if(button1_State == LOW && button2_State == LOW) {
    prestate = 0;
  }
if (count_value>=1)
      digitalWrite(relay,HIGH);
    else if (count_value<=0)
      digitalWrite(relay,LOW);
    
}

