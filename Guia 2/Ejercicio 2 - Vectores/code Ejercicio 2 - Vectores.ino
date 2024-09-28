int valores[] = {10, 4, 2}; 
int n = sizeof(valores) / sizeof(valores[0]); 

void setup() 
{
    Serial.begin(9600);
    for (int i = 1; i < n; i++) 
    {
        int clave = valores[i];  


        for (int d = i - 1; d >= 0; d--)
        {
            if (valores[d] > clave) 
            {
                valores[d + 1] = valores[d];  
                if (d == 0) {  
                    valores[d] = clave;   
                }
            } else {
                valores[d + 1] = clave;  
            }
        }
        delay(500);
    }


}

void loop() {
    Serial.print("Ordenado de menor a mayor: ");
    for (int i = 0; i < n; i++) 
    {
        Serial.print(valores[i]);
        Serial.print(" ");
        delay(300);
    }
    Serial.println(); 
 }

