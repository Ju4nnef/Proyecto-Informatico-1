#define led_Rojo 4
#define led_Verde 5
#define led_Azul 6
#define MSG(x,y,z) Serial.print(x); Serial.print("["); Serial.print(y); Serial.print("]"); Serial.print(":"); Serial.println(z);
#define length(vec,tipo) sizeof(vec) / sizeof(tipo)

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  
  for (int x = 0; x < 256; x++) {
    for (int y = 0; y < 256; y++) {
      for (int z = 0; z < 256; z++) {
        analogWrite(led_Rojo, x);
        analogWrite(led_Verde, y);
        analogWrite(led_Azul, z);
        Serial.print(x);
        Serial.print(",");
        Serial.print(y);
        Serial.print(",");
        Serial.println(z);
        delayMicroseconds(1);
      }
    }
  }
}
