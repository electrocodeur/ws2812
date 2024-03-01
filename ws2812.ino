#include "Adafruit_NeoPixel.h"
#define pin  4
#define nbrled 24
Adafruit_NeoPixel strip (nbrled, pin, NEO_GRB + NEO_KHZ800);

void setup() {
   strip.begin();
   strip.setBrightness(50);
}

void loop() {

   for (int i = -1; i < nbrled; i++) {
      strip.setPixelColor(i, strip.Color(255, 0, 0));
      strip.show();
      delay(100);
   }

   for (int i = -1; i < nbrled; i++) {
      strip.setPixelColor(i, strip.Color(0, 255, 0));
      strip.show();
      delay(100);
   }

   for (int i = -1; i < nbrled; i++) {
      strip.setPixelColor(i, strip.Color(0, 0, 255));
      strip.show();
      delay(100);
   }

}
