#include <LCD5110_Basic.h>

extern uint8_t BigNumbers[];
extern uint8_t MediumNumbers[];
extern uint8_t SmallFont[];

/* SCK / CLK, MOSI / DIN, DC, RST, CS */
LCD5110 lcd(2, 3, 4, 6, 5);

void setup()
{
  lcd.InitLCD();
}

int ctr = 0;
void loop()
{
  lcd.clrScr();

  lcd.setFont(BigNumbers);
  lcd.printNumI(ctr, RIGHT, 0);

  lcd.setFont(MediumNumbers);
  lcd.printNumF(12.34, 2, RIGHT, 24);

  lcd.setFont(SmallFont);
  lcd.print("Line 1", 0, 8*0);
  lcd.print("Line 2", 0, 8*1);
  lcd.print("Line 3", 0, 8*2);
  lcd.print("L 4",    0, 8*3);
  lcd.print("L 5",    0, 8*4);
  lcd.print("0123456789ABCD", 0, 8*5);

  ctr += 5;
  if(ctr >= 1000)
    ctr = 0;

  delay(500);
}
