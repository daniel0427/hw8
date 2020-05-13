#include <Ultrasonic.h>
const int usr_btn = 6;
Ultrasonic ultrasonic(12, 13);
int distance;

void pin_change()
{
  distance = ultrasonic.read();
  Serial.print("Distance in CM: ");
  Serial.println(distance);
}
void setup() {
  Serial.begin(9600);
  attachInterrupt(usr_btn, pin_change, RISING);
}

void loop() {
  delay(1000);
}
