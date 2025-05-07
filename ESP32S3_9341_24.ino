#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();  // Use config from User_Setup.h

void setup() {
  Serial.begin(115200);
  Serial.println("TFT_eSPI Test Begin");

  tft.init();
  tft.setRotation(1);  // Landscape
  tft.fillScreen(TFT_BLUE);

  tft.setTextColor(TFT_WHITE, TFT_BLUE);
  tft.setTextSize(2);
  tft.setCursor(40, 60);
  tft.println("Hello ESP32-S3");
}

void loop() {
  // Nothing needed here
}
