#include <FastLED.h>

CRGB LEDs[8];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, 7, GRB>(LEDs, LEDs.length);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= LEDs.length; i++) {
    LEDs[i] = CRGB(0, 0, 255);
  }
  FastLED.show();
}
