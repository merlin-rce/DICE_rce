#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.begin();
  tft.fillScreen(TFT_BLUE);
}

void loop() {}