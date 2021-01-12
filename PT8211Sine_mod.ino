#include <Audio.h>
#include "DOC_waveform.h"
#include "setI2SFreq.h"

// GUItool: begin automatically generated code
DOC5503                  DOC_output;      //xy=110,75
AudioOutputPT8211        pt8211_1;          //xy=303,78
AudioConnection          patchCord1(DOC_output, 0, pt8211_1, 0);
AudioConnection          patchCord2(DOC_output, 0, pt8211_1, 1);
// GUItool: end automatically generated code

void setup() {

setI2SFreq(44100);
  
  AudioMemory(15);
  DOC_output.begin();

}

void loop() {
}
