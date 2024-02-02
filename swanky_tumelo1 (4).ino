// C++ code
//
void setup(){
 pinMode(8,OUTPUT);
pinMode(2,OUTPUT);
pinMode(12,OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
    digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(2,LOW);
  delay(1000);
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000);
}