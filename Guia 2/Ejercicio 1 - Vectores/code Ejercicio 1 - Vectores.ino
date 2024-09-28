int valores[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 110 }; 
int suma = 0; 
int cant = sizeof(valores) / sizeof(valores[0]);

void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  for (int i = 0; i < cant; i++) 
  {
   	suma += valores[i];
    delay(300);
  }
  
  float media = suma / (float)cant;
  
   Serial.print("Media valores[]: ");
   Serial.println(media);

}