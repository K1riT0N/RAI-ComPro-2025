// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

int a = 0;

void loop()
{
  a = analogRead(A0);
  Serial.print("\nVal: ");
  Serial.print(a);
}