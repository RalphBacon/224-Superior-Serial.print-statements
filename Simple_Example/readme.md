# Example 1

This is the simple example used in the video. It allows all debug statements to be switched on or off with one setting.

You don't need any #include statements here; just copy in the simple **#define** statements and then start using **debug** and **debugln** instead of **Serial.print** and **Serial.println**.

Your output, depending on the debug setting at the top of your code, will look exactly the same as standard Serial.print statements.

Full code:
```
#define DEBUG 0

#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x)
#endif
```
