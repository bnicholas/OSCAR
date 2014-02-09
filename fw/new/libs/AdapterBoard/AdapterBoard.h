#ifndef ADAPTERBOARD_H
#define ADAPTERBOARD_H

#include <Backlight.h>
#include <RGBLed.h>

#define LED_R 13
#define LED_G 9
#define LED_B 10
#define BACKLIGHT_PIN 11
#define SUPPLY_EN 8

//When reading the switches, the logical value is inverted from the actual
//due to the board design.
#define SW_ON 4
#define SW_UP 12
#define SW_DOWN 6

#define STANDBY_COLOUR 1, 0, 0
#define ON_COLOUR      20, 20, 20

class AdapterBoard
{
  public:
    AdapterBoard();
    void init();
    void poll();

  private:
    void initSwitches();
    void pollSwitches();

    void togglePower();

    RGBLed led;
    Backlight backlight;

    bool prev_swOn;
    bool prev_swUp;
    bool prev_swDown;
};

#endif