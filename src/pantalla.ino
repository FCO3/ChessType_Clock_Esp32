#include "ScreenCode.h"
#include "PlayersTime.h"

#define BAUD_RATE (unsigned long)115200

DisplayHandle oled;

void setup() 
{
  oled.SetupScreen();
}

void loop() 
{
  oled.ShowInitialScreen();
}