#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET D5
/* Object named display, of the class Adafruit_SSD1306 */
Adafruit_SSD1306 display(OLED_RESET);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif
// '-441859715-0', 128x64px
const unsigned char myBitmap1 [] PROGMEM = 
{
  //ENTER YOUR IMAGE BITMAP HERE USING image2cpp  (https://javl.github.io/image2cpp/)
}
void setup() {
  
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C); /* Initialize display with address 0x3C */
  display.clearDisplay();  /* Clear display */
  display.setTextSize(1);  /* Select font size of text. Increases with size of argument. */
  display.setTextColor(WHITE);  /* Color of text*/
}
  



void loop() {
  display.drawBitmap(0, 0,  myBitmap1, 128, 64, BLACK, WHITE);
  display.display();
  display.clearDisplay();

}
