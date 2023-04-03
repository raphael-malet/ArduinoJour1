// C++ code
//
int luminosit_C3_A9 = 0;

int i = 0;

int luminosite = 0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (luminosite = 0; luminosite <= 255; luminosite += 3) {
    analogWrite(9, luminosite);
    delay(41); // Wait for 41 millisecond(s)
  }
  for (luminosite = 255; luminosite >= 0; luminosite -= 3) {
    analogWrite(9, luminosite);
    delay(41); // Wait for 41 millisecond(s)
  }
}