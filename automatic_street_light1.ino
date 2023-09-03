// C++ code
//
int input = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  input = analogRead(A0);
  Serial.println("yes all right done");
  delay(10); // Delay a little bit to improve simulation performance
}