#ifndef MYEVENTRECEIVER_H
#define MYEVENTRECEIVER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <stdarg.h>
using namespace std;

#include "TinyXml/tinyxml.h"
#include "SDL.h"

#include <android/log.h>
#define APPNAME "MyApp"


const int max_joystick_inputs=50;

class Receiver
{
private:
    int joystick;
public:
vector<bool> is_ouya_down;
vector<bool> is_ouya_pressed;
    Receiver();
    bool isKeyDown(int keycode);
    bool isKeyPressed(int keycode);
    bool isJoyDown(int joyCode,int joystick);
    bool isJoyPressed(int joyCode,int joystick);
    void endEventProcess();
    void startEventProcess();
    //SDL
    bool KEYS[322];//key pressed
    bool JOYKEYS_player1[max_joystick_inputs];//joykey pressed
    bool JOYKEYS_player2[max_joystick_inputs];//joykey pressed
    bool joy_up_pressed_player_1;
    bool joy_down_pressed_player_1;
    bool joy_left_pressed_player_1;
    bool joy_right_pressed_player_1;
    bool joy_up_pressed_player_2;
    bool joy_down_pressed_player_2;
    bool joy_left_pressed_player_2;
    bool joy_right_pressed_player_2;
    Uint8 *keystates;//key down
    void updateInputs();

	bool isOuyaDown(char key);
	bool isOuyaPressed(char key);
};

#endif // MYEVENTRECEIVER_H>
