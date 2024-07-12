bool boton = false;
bool estado = false;

void setup()
{
  pinMode (1 , INPUT_PULLUP);
  pinMode (5 , OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (A1, INPUT);
  pinMode (A3, INPUT);
  pinMode (A5, INPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  int boton = digitalRead (2);
  
  if(boton == LOW && estado == LOW )
  {
    Serial.println("Tiene 5 s para configurar el color del led...");
    
    delay (5000);
    
    int valorRojo = analogRead(A1);
    int valorAzul = analogRead(A3);
    int valorVerde = analogRead(A5);
  
    int rojo = map( valorRojo, 0, 1023, 0, 255);
    int azul = map( valorVerde, 0, 1023, 0, 255);
    int verde = map( valorAzul, 0, 1023, 0, 255);
    
    analogWrite ( 5 , rojo  );  
    analogWrite ( 9, verde  );  
    analogWrite ( 10, azul );
    
    Serial.print("El led esta usando esta configuración de colores RGB: ");
    Serial.print(rojo);
    Serial.print("; ");
    Serial.print(verde);
    Serial.print("; ");
    Serial.println(azul);
    
    delay (5000);
    
    analogWrite (5, 0);
    analogWrite (9, 0);
    analogWrite (10, 0);
  }
   
  int estado = boton;
}