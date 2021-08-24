#include <Arduino.h>

// Declare the debugging level then include the header file
#define DEBUGLEVEL DEBUGLEVEL_DEBUGGING
#include "debug.h"

int addOne(int inX) {
    debugD("Received value:");
    debuglnD(inX);
    
    debuglnV("Returning.");
    return inX + 1;
}

void setup() {
    Serial.begin(9600);
    debugD("Setup complete.");
}

void loop () {
    static unsigned long counter = 0;
    unsigned long b = addOne(counter);
    debugW("Counter:");
    debuglnW(b);
    delay(5000);
}