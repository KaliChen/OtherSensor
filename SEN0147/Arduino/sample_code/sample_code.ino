
#define grayscalePin 8

void setup()
{
 Serial.begin(9600);
 pinMode(grayscalePin,INPUT);
 Serial.println("Smart Grayscale sensor:");
}
void loop()
{
  Serial.print("Grayscale:");
  Serial.println(digitalRead(grayscalePin));
  /*
  if(digitalRead(grayscalePin))
  {
    Serial.println("White detected");
  }
  else
  {
    Serial.println("Black detected");
  }
  */ 
  delay(500);
}
