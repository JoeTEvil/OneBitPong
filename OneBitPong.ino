// ************************************************************************
// **                                                                    **
// **                          OneBitPong 1.0                            **
// **                          © Pepe Fernández, May 2017                **
// **                          www.geekmatic.com                         **
// **                                                                    **
// ************************************************************************

#include <Adafruit_NeoPixel.h>
#include "OneButton.h"

#define PLAYER_1_PIN    2   // Player One (Big Red Button)
#define PLAYER_2_PIN    3   // Player Two (Big Green Button)
#define SELECT_PIN      4   // Select  (Small Black Button)
#define START_PIN       5   // Start (Small Red Button)
#define SPEAKER_PIN     6   // Speaker
#define PIXEL_PIN       7   // NeoPixels
#define ANALOG_PIN      A0  // Potentiometer

#define PIXEL_COUNT 10

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

OneButton Player_1(PLAYER_1_PIN, false);
OneButton Player_2(PLAYER_2_PIN, false);
OneButton Select(SELECT_PIN, false);
OneButton Start(START_PIN, false);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
