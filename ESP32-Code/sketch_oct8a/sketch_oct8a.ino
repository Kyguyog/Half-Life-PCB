#include "USB.h"
#include "USBHIDKeyboard.h"

// Add Keyboard Key GPIO pins
const int SW1 = 35;
const int SW2 = 36;
const int SW3 = 37;
const int SW4 = 38;

// Vars
int SW1State = 0;
int SW2State = 0;
int SW3State = 0;
int SW4State = 0;


USBHIDKeyboard Keyboard;

void setup() {
  // init USB stuffs
  USB.begin();
  Keyboard.begin();
  Serial.begin(115200); 

  // init keyboard btns
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
  pinMode(SW3, INPUT_PULLUP);
  pinMode(SW4, INPUT_PULLUP);
  delay(1000);
}

void loop() {
  // check pin's statuses
  SW1State = digitalRead(SW1);
  SW2State = digitalRead(SW2);
  SW3State = digitalRead(SW3);
  SW4State = digitalRead(SW4);

  // SW1
  if (SW1State == LOW) {
    Serial.println("SW1");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(KEY_F21);
    Keyboard.release(KEY_LEFT_GUI);
    delay(500);
  }

  // SW2
  if (SW2State == LOW) {
    Serial.println("SW2");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(KEY_F22);
    Keyboard.release(KEY_LEFT_GUI);
    delay(500);
  }

  // SW3
  if (SW3State == LOW) {
    Serial.println("SW3");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(KEY_F23);
    Keyboard.release(KEY_LEFT_GUI);
    delay(500);
  }

  // SW4
  if (SW4State == LOW) {
    Serial.println("SW4");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.write(KEY_F24);
    Keyboard.release(KEY_LEFT_GUI);
    delay(500);
  }
}