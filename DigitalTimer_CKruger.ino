
// include the library code:
#include <LiquidCrystal.h>
#define NOTE_D7  2349
#define NOTE_DS7 2489

// LCD Setup Code
signed short secs;
char timeline[16];
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Sound Setup Code
int melody[] = {
  NOTE_D7, NOTE_DS7, NOTE_D7, NOTE_DS7, NOTE_D7, NOTE_DS7
};
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

// Button Setup Code
const int buttonPin = 7;
int buttonState = 0;

// Timer Setup Code
int timer = 0;
int sec_timer = (timer/1000);

void setup() {
  // Setup and Print message to LCD
  lcd.begin(16, 2);
  lcd.print("Count to 5:");

  // Initialize push button
  pinMode(buttonPin, INPUT);
}

void loop() {
  lcd.setCursor(0, 1);
  sprintf(timeline,"%0.2d secs", secs);
  lcd.print(timeline);
  
  if (buttonState == 0) {
    buttonState = digitalRead(buttonPin);
  }


  if (buttonState == HIGH) {
    delay(1000);
    secs++;
    
    if (secs == 6)
    {
      for (int thisNote = 0; thisNote < 6; thisNote++) {
  
        // to calculate the note duration, take one second divided by the note type.
        //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
        int noteDuration = 1000 / noteDurations[thisNote];
        tone(8, melody[thisNote], noteDuration);
    
        // to distinguish the notes, set a minimum time between them.
        // the note's duration + 30% seems to work well:
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        // stop the tone playing:
        noTone(8);
  
        secs = 0;
      }
      buttonState = 0;
    }
  } else {
    secs = 0;
  }
  
}

