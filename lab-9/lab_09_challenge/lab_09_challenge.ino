// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); //RED
  pinMode(12, OUTPUT); //Yelow
  pinMode(11, OUTPUT); //Green
  pinMode(2, INPUT);
  Serial.begin(9600);
}

int a = 0;

void loop()
{
  while (digitalRead(2) == 0) {
    delay(2500);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    delay(1000);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(5000);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(2500);
  }
  
  Serial.print("Button is pressed\n");
  
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(10000);
  
  Serial.print("Cross time ended\n");

  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(2500);
}