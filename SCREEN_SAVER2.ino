#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup();
}

void loop()
{
  for(int i=0;i<8;i++)
  for(int x=0;x<8;x++)
  {
    int y=random(15);
  DrawPx(i,0,y);
  DrawPx(i,1,y);
  DrawPx(i,2,y);
  DrawPx(i,3,y);
  DrawPx(i,4,y);
  DrawPx(i,5,y);
  DrawPx(i,6,y);
  DrawPx(i,7,y);
  DrawPx(0,x,y);
  DrawPx(1,x,y);
  DrawPx(2,x,y);
  DrawPx(3,x,y);
  DrawPx(4,x,y);
  DrawPx(5,x,y);
  DrawPx(6,x,y);
  DrawPx(7,x,y);
 DisplaySlate();
delay(100);
//ClearSlate();
DisplaySlate();
  }
}

void beep()
{
  Tone_Start(18182,100);
  //delay(45);
}
