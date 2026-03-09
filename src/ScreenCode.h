#ifndef SCREENCODE_H
#define SCREENCODE_H

#include <stdio.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class DisplayHandle
{
public:
  Adafruit_SSD1306 display;
 
  DisplayHandle(void);
  //~DisplayHandle(void);
  void RestartToInitialScreen(void);
  uint8_t SelectNumOfPlayers(void);
  void SetupScreen(void);
  void ShowInitialScreen(void);
  void ShowTimers(void);
  void UpdateTimers(uint8_t numOfPlayers);
};

#endif /*SCREENCODE_H*/