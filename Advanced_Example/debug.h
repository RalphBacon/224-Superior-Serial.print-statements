// Logging (from Serial.print statements) can be customised by setting the verbosity here:
/*  
    E - errors that you really, really should see
    W - warnings that help you find out what's going wrong
    D - debugging messages that you only want to see when debugging
    V - verbose meaning everything is printed

    To use, just #include this header file in your standard Arduino Code and then
    define the level of logging you want by setting the DEBUGLEVEL to one of the values
    listed here.

    In your code, instead of using Serial.print and Serial.println statements use
    debugE / debuglnE, debugW / debuglnW, D, V (as you see the level of logging required)
    and only those messages will appear.

    Example:

    You want Errors, Warnings and General Debugging output but not those marked as Verbose.
    #define DEBUGLEVEL DEBUGLEVEL_DEBUGGING
*/

// User picks debugging level from this list
#define DEBUGLEVEL_ERRORS 1
#define DEBUGLEVEL_WARNINGS 2
#define DEBUGLEVEL_DEBUGGING 3
#define DEBUGLEVEL_VERBOSE 4
#define DEBUGLEVEL_NONE 0

// We want to debug everything! Overide this in your sketch 
#ifndef DEBUGLEVEL
#define DEBUGLEVEL DEBUGLEVEL_VERBOSE
#warning Debug Level is set to default level. \
To change this, type in your sketch:   \
#define DEBUGLEVEL followed by your preferred level of debugging\
before the #include statement
#endif

void debugNothing(...) {
    // This does nothing and will be zapped by the compiler
}

bool traceStampRequired = true;
#define traceStamp Serial.print("["); Serial.print(__FUNCTION__); Serial.print(":");Serial.print(__LINE__); Serial.print("] ");traceStampRequired=false;

// This is a macro that turns simple (one string) Serial.println statements on and off
#if DEBUGLEVEL > 0
#define debugE(x) if(traceStampRequired) {traceStamp;} Serial.print(x)
#define debuglnE(x) traceStampRequired=true; Serial.println(x)
#else
#define debugE(x)   // Nothing to see here
#define debuglnE(x) // Or here
#endif

#if DEBUGLEVEL > 1
#define debugW(x) if(traceStampRequired) {traceStamp;} Serial.print(x)
#define debuglnW(x) traceStampRequired=true; Serial.println(x)
#else
#define debugW(x)   // Nothing to see here
#define debuglnW(x) // Or here
#endif

#if DEBUGLEVEL > 2
#define debugD(x) if(traceStampRequired) {traceStamp;} Serial.print(x)
#define debuglnD(x) traceStampRequired=true; Serial.println(x)
#else
#define debugD(x)   /* Nothing to see here */
#define debuglnD(x) // Or here
#endif

#if DEBUGLEVEL > 3
#define debugV(x) if(traceStampRequired) {traceStamp;} Serial.print(x);
#define debuglnV(x)  if(traceStampRequired) {traceStamp;} traceStampRequired=true; Serial.println(x)
#else
#define debugV(x)    debugNothing(x);
#define debuglnV(x)  debugNothing(x);
#endif