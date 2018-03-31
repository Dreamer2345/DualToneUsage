#include <Arduboy2.h>
Arduboy2 ard;
BeepPin1 beep;
BeepPin2 beep1;
#include "Tone.h"

uint16_t CombineFreq(uint16_t f, uint16_t f1){
  return (f+f1)/2;
}



void setup() {
  ard.begin();
  ard.setFrameRate(60);
  beep.begin();
  beep1.begin();
}

void loop() {
  if (!ard.nextFrame()) {
    return;
  }
  ard.pollButtons();
  beep.timer();
  beep1.timer();
  if(ard.pressed(UP_BUTTON)){
    beep.tone(beep.freq(NOTE_C3),5);
  }
  if(ard.pressed(DOWN_BUTTON)){
    beep.tone(beep.freq(NOTE_D3),5);
  } 
  if(ard.pressed(RIGHT_BUTTON)){
    beep.tone(beep.freq(NOTE_E3),5);
  }
  if(ard.pressed(LEFT_BUTTON)){
    beep.tone(beep.freq(NOTE_F3),5);
  } 
  if(ard.pressed(A_BUTTON)){
    beep1.tone(beep.freq(NOTE_C4),5);
  } 
  if(ard.pressed(B_BUTTON)){
    beep1.tone(beep.freq(NOTE_E4),5);
  } 
}
