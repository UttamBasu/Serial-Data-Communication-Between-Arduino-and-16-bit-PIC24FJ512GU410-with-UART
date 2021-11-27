int val = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(12, INPUT);
}

void loop()
{
  val = digitalRead(12);
  if (val == 1)
  {
    Serial.write("a");
    delay(1000);
  }
  if (val == 0)
  {
    Serial.write("b");
    delay(1000);
  }
}
