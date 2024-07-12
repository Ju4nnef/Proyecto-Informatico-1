#define ECHO 6
#define TRIG 7
#define PIR 1
#define buzzer 5
#define pin_rojo 2
#define pin_verde 3

void setup()
{
  pinMode (pin_rojo , OUTPUT);
  pinMode (pin_verde , OUTPUT);
  
  pinMode (ECHO , INPUT);
  pinMode (TRIG , OUTPUT);
  pinMode (PIR , INPUT);
  
  pinMode (buzzer , OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite ( TRIG , LOW);
  delayMicroseconds (2);
  digitalWrite ( TRIG , HIGH);
  delayMicroseconds (10);
  digitalWrite ( TRIG , LOW);
  
  float tiempo = pulseIn ( ECHO , HIGH );
  float distancia = tiempo / 57.6 ;
  
  Serial.print("El objeto se encuentra a : ");
  Serial.print ( distancia );
  Serial.println ( " cm" );
  
  
  
  
  if ( digitalRead(PIR) == LOW )
  {
    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    
    analogWrite(buzzer, 0);
    
  }else{
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
  }
  
  if( distancia < 100)
  {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    
    analogWrite(buzzer, 30); 
    delay(500);
    analogWrite(buzzer, 100); 
    delay(500);
  }  
}