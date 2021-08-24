# Example 2

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
The output will look something like this (along with the function and line number, remember):

```
[loop:32] Main loop running
[addOneToCount:4] Adding one to count
[tempConversion:32] Unable to get temp reading, response: -1
```

You can amend the code to your liking and, perhaps, output the **debug level** along with the message, like this:
```
[D][loop:32] Main loop running
```

Enjoy!
