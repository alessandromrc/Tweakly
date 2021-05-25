/*
*
*  DIGITAL TOGGLE ALL EXAMPLE FOR TWEAKLY
*  Created By Mirko Pacioni
*
*/

#include "Tweakly.h"

#define LED_ONE 13
#define LED_TWO 12
#define LED_THREE 11
#define LED_FOUR 10

void setup()
{
  //Start serial
  Serial.begin(9600);

  //Init pad for four leds
  padMode(LED_ONE, OUTPUT, LOW);
  padMode(LED_TWO, OUTPUT, LOW);
  padMode(LED_THREE, OUTPUT, LOW);
  padMode(LED_FOUR, OUTPUT, LOW);

  //Start multiblink ticker timer
  setTick("multiblink", 200, multiBlink);
}

void multiBlink()
{
  //Toggle all output pins
  digitalToggleAll();
}

void loop()
{
  //Call Tweakly forever
  TweaklyRun();
  //Put your code here :-)
}
