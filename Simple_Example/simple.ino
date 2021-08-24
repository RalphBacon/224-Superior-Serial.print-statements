#include <Arduino.h>

#define DEBUG 0

#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x)
#endif

int addOne(int inX) {
    debug("Received value:");
    debugln(inX);
    
    // Other processing done here

    debugln("Returning.");
    return inX + 1;
}

void setup() {
    Serial.begin(9600);
    debugln("Setup complete.");
}

void loop () {
    static unsigned long counter = 0;
    unsigned long b = addOne(counter);
    debug("Counter:");
    debugln(b);

    // Emulate other processing being done herek
    delay(5000);
}