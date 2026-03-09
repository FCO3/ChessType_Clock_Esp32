#include "ScreenCode.h"

#define SCREEN_WIDTH (uint8_t)128
#define SCREEN_HEIGHT (uint8_t)64
#define RESET_PIN (int8_t)-1
#define OLED_ADDR 0x3C
#define SDA_PIN  (int)21
#define SCL_PIN  (int)19 //SCK or SCL
#define FONT_SIZE_FOR_INITIAL (uint8_t)3

/* 
 * Refer to header for further information.
 */
DisplayHandle::DisplayHandle()
{

}

/* 
 * Refer to header for further information. 
 */
void DisplayHandle::ShowInitialScreen()
{
  display.setTextSize(FONT_SIZE_FOR_INITIAL);
  display.setTextColor(WHITE);
  display.setCursor(10,20);
  display.println("Hola!");
  display.display();
  delay(10000);
}

/* 
 * Refer to header for further information.
 */
void DisplayHandle::RestartToInitialScreen()
{

}

/* 
 * Refer to header for further information.
 */
uint8_t DisplayHandle::SelectNumOfPlayers()
{

}

/** 
 * Refer to header for further information.
 */
void DisplayHandle::SetupScreen()
{
  display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, RESET_PIN);
  Wire.begin(SDA_PIN, SCL_PIN);

  if(!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) 
  {
    while(true); 
  }
  
  display.clearDisplay();
}

/* 
 * Refer to header for further information.
 */
void DisplayHandle::ShowTimers()
{

}

/* 
 * Refer to header for further information.
 */
void DisplayHandle::UpdateTimers(uint8_t numOfPlayers)
{

}