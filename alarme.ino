// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  if (analogRead(A0) > 550) {
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  } else {
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }
}