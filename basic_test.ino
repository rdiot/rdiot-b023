/* Samsung ARTIK 5 (ARTIK5-V0.5) Blank LED with Arduino IDE [B023] : http://rdiot.tistory.com/13 [RDIoT Demo] */

// arduino code to ARTIK
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
