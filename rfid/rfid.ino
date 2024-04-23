#define sensorPin A0



int count = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int x = analogRead(sensorPin);
  // Serial.println(x);
  if (x == 1023){
    count ++;
  }
  else{
    count =0;
  }

  if (count == 25){
    Serial.println("GOTTEEEEEMM");
  }
  delay(50);
}
