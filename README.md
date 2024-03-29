# 224 Superior Serial.print statements
Use this to **speed up** your final project and **reduce code bloat**! And we learn about printing formatted strings using **printf** too!

![smallThumbnail](https://user-images.githubusercontent.com/20911308/130572037-8f46e648-85fe-4a27-a83e-33e81191d0fc.gif)  
Watch the video first to bring yourself up to speed!  
Video link: https://youtu.be/--KxxMaiwSE




### There are two examples for you: 
* the first is the one used in the YouTube video; it's simple and very understandable and will save you program (sketch) space and speed up final execution of the code too.

* the second is more advanced and was not covered in the video. It prints out the **function name** and **line number** from where the debugging statement was called, and is more granular: you can write different levels of debugging message, including Errors, Warnings, General Debugging and Verbose messages. You can easily expand on these types and control what appears from one line in your sketch.

If you are new to this, install the first example first (or ensure you understand the concepts) before installing the more advanced method.

### printf anyone?
I'll cover this in more detail in a future video. The ESP32 and EPS8266 already have this function built-in, but the Arduino benefits greatly from using the **LibPrint** library from Embedded Artistry and Marco Paland. As I say, we'll have a deeper dive in a future video.  
https://github.com/embeddedartistry/arduino-printf  
https://github.com/mpaland/printf  
