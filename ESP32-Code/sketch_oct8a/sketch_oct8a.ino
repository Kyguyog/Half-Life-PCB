#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
  USB.begin();
  Keyboard.begin();
}

void loop() {
  Keyboard.write(KEY_RETURN);
    delay(5000);
}