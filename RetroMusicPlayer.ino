/*
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#include "pitches.h"
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int d = 150; //Standart-Delay für Mario Song (150ms)
int k = 100; //die Note wird 100 Millisekunden abgespielt (für Tetris Song)

// notes in the melody:
int melody[] = {
  C4, G3, G3, A3, G3, 0, B3, C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  // iterate over the notes of the melody.
  
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void playMario(){
  lcd.clear();
  lcd.print("Mario Overworld");
    
    tone(1, E6);
    delay(d);
    noTone(1);

    tone(1, E6);
    delay(d);
    noTone(1);

    delay(d);

    tone(1, E6);
    delay(d);
    noTone(1);

    delay(d);

    tone(1, C6);
    delay(d);
    noTone(1);

    tone(1, E6);
    delay(d);
    noTone(1);

    delay(d);

    tone(1, G6);
    delay(d);
    noTone(1);

    delay(d*3);

    tone(1, G5);
    delay(d);
    noTone(1);

    delay(d*3);

    tone(1, C6);
    delay(d);
    noTone(1);

    delay(d*2);

    tone(1, G5);
    delay(d);
    noTone(1);

    delay(d*2);

    tone(1, E5);
    delay(d);
    noTone(1);

    delay(d*2);

    tone(1, A5);
    delay(d);
    noTone(1);

    delay(d);

    tone(1, B5);
    delay(d);
    noTone(1);

    delay(d);

    tone(1, AS5);
    delay(d);
    noTone(1);

    tone(1, A5);
    delay(d);
    noTone(1);

    delay(d);

    tone(1, G5);
    delay(113);
    noTone(1);

    delay(94);

    tone(1, E6);
    delay(113);
    noTone(1);

    delay(94);

    tone(1, G6);
    delay(113);
    noTone(1);

    delay(80);
    
    tone(1, A6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    tone(1, B5);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, FS6);
    delay(d);
    noTone(1);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    tone(1, F4);
    delay(d);
    noTone(1);
    
    tone(1, GS5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, FS6);
    delay(d);
    noTone(1);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, FS6);
    delay(d);
    noTone(1);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    tone(1, F4);
    delay(d);
    noTone(1);
    
    tone(1, GS5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    //eventuell könnte man hier schluss machen
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, FS6);
    delay(d);
    noTone(1);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    tone(1, F4);
    delay(d);
    noTone(1);
    
    tone(1, GS5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, FS6);
    delay(d);
    noTone(1);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, G6);
    delay(d);
    noTone(1);
    
    tone(1, FS6);
    delay(d);
    noTone(1);
    
    tone(1, F6);
    delay(d);
    noTone(1);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, E6);
    delay(d);
    noTone(1);
    
    tone(1, F4);
    delay(d);
    noTone(1);
    
    tone(1, GS5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, C5);
    delay(d);
    noTone(1);
    
    tone(1, A5);
    delay(d);
    noTone(1);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    tone(1, C4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, DS6);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    tone(1, D6);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    tone(1, C6);
    delay(d);
    noTone(1);
    
    delay(d*2);
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    tone(1, G4);
    delay(d);
    noTone(1);
    
    delay(d);
    
    tone(1, C4);
    delay(d);
    noTone(1);

    delay(100);

    lcd.clear();
}
void playTetris() {
  lcd.clear();
  lcd.print("Tetris Theme....");
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, B5);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    //eventuell k E6
    
    tone(1, D6);
    delay(k);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, B5);
    delay(k*2);
    noTone(1);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, D6);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, B5);
    delay(k*5);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, B3);
    delay(k*2);
    noTone(1);
    
    tone(1, C4);
    delay(k*2);
    noTone(1);
    
    tone(1, D4);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, F6);
    delay(k*2);
    noTone(1);
    
    tone(1, A6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, G6);
    delay(k*2);
    noTone(1);
    
    tone(1, F6);
    delay(k*2);
    noTone(1);
    
    tone(1, E6);
    delay(k*5);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, D6);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, B5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, B5);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k*5);
    
    //delay(k);
    //tone(1, GS3);
    //delay(k*3);
    //noTone(1);
    //delay(k);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, B5);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*4);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, B5);
    delay(k*2);
    noTone(1);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, D6);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, B5);
    delay(k*5);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, B3);
    delay(k*2);
    noTone(1);
    
    tone(1, C4);
    delay(k*2);
    noTone(1);
    
    tone(1, D4);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, F6);
    delay(k*2);
    noTone(1);
    
    tone(1, A6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, G6);
    delay(k*2);
    noTone(1);
    
    tone(1, F6);
    delay(k*2);
    noTone(1);
    
    tone(1, E6);
    delay(k*5);
    noTone(1);
    
    delay(k);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, D6);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, B5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, B5);
    delay(k*2);
    noTone(1);
    
    tone(1, C6);
    delay(k*2);
    noTone(1);
    
    tone(1, D6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, E6);
    delay(k*3);
    noTone(1);
    
    tone(1, C6);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A5);
    delay(k*3);
    noTone(1);
    
    //für loop hier aufhören
    
    delay(k*5);
    
    //delay(k);
    //tone(1, GS3);
    //delay(k*3);
    //noTone(1);
    //delay(k);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, B3);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, GS3);
    delay(k*3);
    noTone(1);
    
    delay(k);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, A4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS4);
    delay(k*2);
    noTone(1);
    
    tone(1, E5);
    delay(k*2);
    noTone(1);
    
    tone(1, GS3);
    delay(k*2);
    noTone(1);
    
    tone(1, GS3);
    delay(k*2);
    noTone(1);
    
    tone(1, GS3);
    delay(k*3);
    noTone(1);

    delay(100);
    
    lcd.clear();
    //Ende des Songs
}
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8)==HIGH){
    playTetris();
  }
  if (digitalRead(6)==HIGH){
    playMario();
  } 
}

