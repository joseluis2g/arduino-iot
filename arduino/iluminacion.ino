// Codigo por Joseluis Gonzalez
int releNO = 13;
int inputPir = 2;
int val = 0;
int resuldoSensorLDR;
int sensorLDR = A0;

void setup()
{
  pinMode(releNO, OUTPUT);
  pinMode(inputPir, INPUT);
  pinMode(sensorLDR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val = digitalRead(inputPir);
  resuldoSensorLDR = analogRead(sensorLDR);
  if(resuldoSensorLDR<600)
  {
    if(val == HIGH)
    {
      digitalWrite(releNO, HIGH);
      Serial.println("Sensor activado");
      delay(5000);
  }
    else{
      digitalWrite(releNO, LOW);
      delay(300);
  }
}
  else{ digitalWrite (releNO, LOW);
  Serial.println(resuldoSensorLDR);
  delay(500);
  }
}