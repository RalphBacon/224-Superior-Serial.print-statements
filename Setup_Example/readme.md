# Example 3

This example extends the simple example by including the serial port setup. This is useful for projects where the serial port will only be used for debugging.

A new definition, ```debugSetup()``` replaces ```Serial.begin()```, allowing the Serial library to be completely excluded automatically if debugging is disabled.

You can even combine ```debugSetup()``` with ```Serial.begin()```, using two different baud rates. To do this, add the ```Serial.begin()``` line above the ```debugSetup()``` line.

Full code:
```
#define DEBUG 1

#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#define debugSetup(x) Serial.begin(x)
#else
#define debug(x)
#define debugln(x)
#define debugSetup(x)
#endif
```
