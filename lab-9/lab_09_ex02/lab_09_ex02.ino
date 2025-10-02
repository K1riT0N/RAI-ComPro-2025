// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

int a = 0, b = 255;

void loop()
{
  if (a != 255 || b != 0) {
    if (a < 255) {
      analogWrite(9, a);
      Serial.print("\nVal A: ");
      Serial.print(a);
      a += 5;
    }
    else if (b > 0) {
      analogWrite(9, b);
      Serial.print("\nVal B: ");
      Serial.print(b);
      b -= 5;
    }
  } else {
    a = 0, b = 255;
  }
}