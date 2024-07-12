
int led_rojo = 0;
int led_verde = 0;
int led_azul = 0;

int modificacion = 200;

int boton = 0;

void setup()
{
  pinMode(3  , OUTPUT); //rojo
  pinMode(6 , OUTPUT); // azul
  pinMode(9 , OUTPUT); // verde
  
  pinMode( 2, INPUT_PULLUP);
  
  pinMode( A1,INPUT);
  
}

void loop()
{
  int potenciometro = analogRead(A1);
  
  modificacion = map(potenciometro, 0, 1023, 200, 1500);
  
  
  boton = digitalRead(2);
  
  if (boton == LOW)
  {
    analogWrite(3, 0);
    analogWrite(6, 0);
    analogWrite(9, 0);
  }else {
   
    led_rojo = random(0, 256);
    led_azul = random(0, 256);
    led_verde = random(0, 256);
    
    analogWrite(3, led_rojo);
    analogWrite(6, led_azul);
    analogWrite(9, led_verde);
    
    delay(modificacion);
  }
}