// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
}

int a = 0;

void loop()
{
  a = analogRead(A0);
  if (a > 512) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}