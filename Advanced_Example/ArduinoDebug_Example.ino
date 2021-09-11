#include "Arduino.h"
#define DEBUGLEVEL DEBUGLEVEL_VERBOSE
#include "debugArduino.h"

void setup() {
  Serial.begin(115200);
  debuglnD("Setup started");
}

void loop() {
    debuglnE("This is an error line");
    debuglnW("This is a warning line");
    debuglnD("This is a debugging line");
    debuglnV("This is a verbose line");

    debugE("This is ");
    debugW("just one line ");
    debugV("of debugging\n");
    debugD("But this has a debug stamp");
    debuglnV("");

    delay(5000);

    debuglnD("This is a debugging line");
    debuglnE("This is an error line");
    debuglnV("This is a verbose line");
    debuglnW("This is a warning line");

    delay(5000);
}
