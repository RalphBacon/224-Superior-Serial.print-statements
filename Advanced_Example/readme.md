# Example 2 - Updated!

This provides a superior form of debugging.

* the function and line number of the debugging statement is output along with the message
* the supporting debug code is now in a separate header file to avoid program clutter
* allows granular levels of debugging - some for errors, others for warnings and other that only appear when you really need them to
* all controlled with a single #define statement in your code

In your sketch, decide what level of debugging you want. Choose from the following debug levels:

```
ERRORS - errors that you really, really should see
WARNINGS - warnings that help you find out what's going wrong
DEBUGGING - debugging messages that you only want to see when debugging
VERBOSE - verbose meaning everything is printed
```
Each level will also print all the statements in the levels above it (so Warnings will also print Errors but not Debugging or Verbose messages).  

Initially, in your main sketch, set the debugging level to "verbose" so that **all** debugging messages appear:

```
#define DEBUGLEVEL DEBUGLEVEL_VERBOSE
```

Then include the supporting, simple code:
```
#include "debug.h"
```

Job done! Now, instead of writing Serial.print and Serial.println statements use the following:

```
debuglnE("This is an error debugging statement for when things fail");
debugW("A warning message that doesn't include a new line");
debuglnD("A general debugging level statement");
debuglnV("A verbose message, usually reserved for nitty, gritty debugging);
```
The output will look something like this (along with the debug level, function name and line number):

```
[D][loop:32] Main loop running
[V][addOneToCount:4] Adding one to count
[E][tempConversion:32] Unable to get temp reading, response: -1
```

Actual Real World example output from CoolTerm which can add timestamps as shown here:
```
15:25:00.947 --> [D][setup:89] Setup started
15:25:00.947 --> [D][setup:91] Setting ESP32 as Access Point and Station, no power savings
15:25:01.076 --> [W][setup:95] Setting as a Wi-Fi Station .
15:25:01.575 --> ......
15:25:04.076 --> Running on IP 192.168.1.82, Channel 11, MAC address CC:40:E3:D5:9F:18
15:25:05.308 --> [D][setup:144] Setup completed
15:26:16.026 --> [D][loop:215] New client
15:26:16.026 --> [D][loop:218] Client connected
15:26:16.026 --> GET / HTTP/1.1
15:26:27.058 --> [D][loop:215] New client
15:26:27.058 --> [D][loop:218] Client connected
15:26:27.058 --> GET /favicon.ico HTTP/1.1
15:26:28.791 --> [D][loop:215] New client
15:26:28.791 --> [D][loop:218] Client connected
```

Enjoy!
