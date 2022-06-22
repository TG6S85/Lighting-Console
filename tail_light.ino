bool brake; // We will need this later!!! 

// Defining taillight output pins for lighing controller
#define p1 3
#define p2 4
#define p3 5
#define p4 7
#define p5 8
#define p6 9

// Defining input pins for lighting controller
#define brake 15
#define left 16
#define right 17
#define hazard 18

// Header file holding state functions.
#include "state_funcs.h"

int main() {
  while(true) {
    // Left Process
    while(digitalRead(left) == true) {
      if(digitalRead(left) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state8();
      }
      else {
        state2();
      }
      digitalWrite(left, LOW);
      digitalWrite(brake, LOW);
      delay(100);
      if(digitalRead(left) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state9();
      }
      else {
        state3();
      }
      delay(100);
      if(digitalRead(left) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state10();
      }
      else {
        state4();
      }
      digitalWrite(left, LOW);
      digitalWrite(brake, LOW);
      delay(100);
      if(digitalRead(left) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state1();
      }
      else {
        state5();
      }
      digitalWrite(left, LOW);
      digitalWrite(brake, LOW);
      delay(100);
    }
    
    // Right Process
    while(digitalRead(right) == true) {
      if(digitalRead(right) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state5();
      }
      else {
        state2();
      }
      digitalWrite(right, LOW);
      digitalWrite(brake, LOW);
      delay(100);
      if(digitalRead(right) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state11();
      }
      else {
        state6();
      }
      delay(100);
      if(digitalRead(right) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state12();
      }
      else {
        state7();
      }
      digitalWrite(right, LOW);
      digitalWrite(brake, LOW);
      delay(100);
      if(digitalRead(right) == false) {
        break;
      }
      if(digitalRead(brake) == true) {
        state1();
      }
      else {
        state8();
      }
      digitalWrite(right, LOW);
      digitalWrite(brake, LOW);
      delay(100);
    }
    if(digitalRead(brake) == true) {
      state1();
    }
    else {
      state2();
    }
    digitalWrite(brake, LOW);
  }
}
