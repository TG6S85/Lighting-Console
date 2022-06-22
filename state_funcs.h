/* This is an event based implimentation for our car's tail lights, using states. 
 *  State 1 = ALL ON
 *  State 2 = ALL OFF
 *  State 3 = 00010
 *  State 4 = 000110
 *  State 5 = 000111
 *  State 6 = 001000
 *  State 7 = 011000
 *  State 8 = 111000
 *  State 9 = 111100
 *  State 10 = 111110
 *  State 11 = 001111
 *  State 12 = 011111
 */

void state1() {
  digitalWrite(p1, HIGH);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, HIGH);
}

void state2() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
}

void state3() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
}

void state4() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, LOW);
}

void state5() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, HIGH);
}

void state6() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
}

void state7() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
}

void state8() {
  digitalWrite(p1, HIGH);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
}

void state9() {
  digitalWrite(p1, HIGH);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
}

void state10() {
  digitalWrite(p1, HIGH);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, LOW);
}

void state11() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, HIGH);
}

void state12() {
  digitalWrite(p1, LOW);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  digitalWrite(p6, HIGH);
}
