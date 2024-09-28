int valores[] = {2, 6, 10, 11}; 
int n = sizeof(valores) / sizeof(valores[0]);  // size of array 

void setup() {
    Serial.begin(9600); 
}

void loop() {
    for (int i = 0; i < n; i++)
    {
        Serial.print("Multiplos de ");
        Serial.print(valores[i]);
        Serial.print(": ");
        
        //solo limitar a 5 mult
        for (int j = 1; j <= 5; j++) 
        {
            Serial.print(valores[i] * j);  //calculo del multiplo
            Serial.print(" ");
            delay(500);  
        }
        Serial.println();  // enter
    }
  
    delay(2000);
}
