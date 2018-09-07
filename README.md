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


## Part C. Using a time-based digital sensor

<a href="https://youtu.be/vhxhbqJrTTU">Rotary Encoder Proof</a>


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

**b. Post a link to the completed lab report your class hub GitHub repo.**<BR>
