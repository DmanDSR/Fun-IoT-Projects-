//Dylan Sedeno 2022
#include "pitches.h" // pitches library

// The melody array 
int melody[] = {
  NOTE_C5, NOTE_C5, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, 
  NOTE_D5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_G4, NOTE_G4, 
  NOTE_F4, NOTE_F4, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_E5, 
  NOTE_D5, NOTE_D5, NOTE_G5, NOTE_G5,  NOTE_F5, NOTE_G5,
  NOTE_F5, NOTE_F5, NOTE_F5,  NOTE_E5, NOTE_E5, NOTE_D5,
  NOTE_D5, NOTE_C5, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5,
  NOTE_C5, NOTE_G4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_D5,
  NOTE_D5 
};

// The note duration, 8 = 8th note, 4 = quarter note, etc.
int durations[] = {
  3, 8, 3, 8, 3, 8, 
  3, 8, 3, 8, 3, 8, 
  3, 8, 3, 8, 3, 8, 
  3, 8, 3, 8, 16, 16,
  6, 8, 8, 3, 8, 3,
  8, 3, 8, 3, 8, 3,
  8, 3, 8, 3, 8, 3,
  8
};
// determine the length of the arrays to use in the loop iteration
int songLength = sizeof(melody)/sizeof(melody[0]);
void setup() {
 //We don't need anything here
}

void loop() {
  // goes through both arrays
  // The for loop stops when it is equal to the size of the melody array
  for (int thisNote = 0; thisNote < songLength; thisNote++){ // determine the duration of the notes
    int duration = 1000/ durations[thisNote];  // divide 1000 by the value, so the first note lasts for 1000/8 milliseconds
    tone(8, melody[thisNote], duration);
    // pause between notes
    int pause = duration * 1.3;
    delay(pause);
    noTone(8); // stop the tone
  }
}
