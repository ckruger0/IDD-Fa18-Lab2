# Make a Digital Timer!
 
## Overview
For this assignment, you are going to 

A) [Solder your LCD panel](#part-a-solder-your-lcd-panel)

B) [Write text to an LCD Panel](#part-b-writing-to-the-lcd) 

c) [Using a time-based digital sensor!](#part-c-using-a-time-based-digital-sensor)

D) [Make your Arduino sing!](#part-d-make-your-arduino-sing)

E) [Make your own timer](#part-e-make-your-own-timer) 
 
## Part A. Solder your LCD panel

<img src="https://i.imgur.com/KQFWiSW.jpg">
 
## Part B. Writing to the LCD
 
**a. What voltage level do you need to power your display?**<BR>
5V

**b. What voltage level do you need to power the display backlight?**<BR>
3V
   
**c. What was one mistake you made when wiring up the display? How did you fix it?**<BR>
One mistake I made wiring up the display was figuring out the orientation between the display pins and the Arduino I/O pins. I had a few false starts where I started connecting wires across other wires so it was a mess, but once I separated it to another breadboard it worked out. 

**d. What line of code do you need to change to make it flash your name instead of "Hello World"?**<BR>
lcd.print()
 
**e. Include a copy of your Lowly Multimeter code in your lab write-up.**<BR>

<a href="https://github.com/ckruger0/IDD-Fa18-Lab2/blob/master/LowlyMultimeter.ino">Lowly Multimeter - CODE</a><BR>
<a href="https://www.youtube.com/watch?v=dvQln0haYnE">Lowly Multimeter - VIDEO</a>

## Part C. Using a time-based digital sensor

<a href="https://youtu.be/vhxhbqJrTTU">Rotary Encoder - VIDEO</a>

## Part D. Make your Arduino sing!

**a. How would you change the code to make the song play twice as fast?**<BR>
The example code contained the following line that dictated delay between notes:<BR>
 
```
int pauseBetweenNotes = noteDuration * 1.30
```
 
I changed the multplier to 1.30/2 = 0.65. Final code looked like below:<BR>

```
int pauseBetweenNotes = noteDuration * 0.65
```

**b. What song is playing?**<BR>
Star Wars theme song

## Part E. Make your own timer

**a. Make a short video showing how your timer works, and what happens when time is up!**<BR>
 <a href="https://github.com/ckruger0/IDD-Fa18-Lab2/blob/master/DigitalTimer_CKruger.ino">Digital Timer - CODE</a><BR>
 <a href="https://www.youtube.com/watch?v=g39is1shZ5M">Digital Timer - VIDEO</a><BR><BR>
 My digital timer counts to 5 seconds once a button on the breadboard is pressed. After 5 seconds elapses, a short jingle is played and the timer is reset back to 0 seconds.

**b. Post a link to the completed lab report your class hub GitHub repo.**<BR>
 Okay.
