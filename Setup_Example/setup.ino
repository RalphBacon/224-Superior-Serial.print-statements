#include <Arduino.h>

#define BAUD_RATE 115200
#define DEBUG 0

#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#define debugSetup(x) Serial.begin(x)
#else
#define debug(x)
#define debugln(x)
#define debugSetup(x)
#endif

int addOne(int inX) {
    debug("Received value:");
    debugln(inX);
    
    // Other processing done here

    debugln("Returning.");
    return inX + 1;
}

void setup() {
    Serial.begin(BAUD_RATE);
    debugSetup(9600); // Overrides the above line if DEBUG = 1
    Serial.println("Runtime message - Setup Complete");
    debugln("Debug message - Only printed if DEBUG = 1.");
}

void loop () {
    static unsigned long counter = 0;
    unsigned long b = addOne(counter);
    debug("Counter:");
    debugln(b);

    // Emulate other processing being done herek
    delay(5000);
}