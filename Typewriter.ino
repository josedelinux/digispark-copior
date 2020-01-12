#include "DigiKeyboard.h"
  //writen  by Josedelinux
void setup() { 
    //don`t need to set anything up
}
void loop() {


  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

  
  //DigiKeyboard.delay(400); 
  
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.println();
  //DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);
}

