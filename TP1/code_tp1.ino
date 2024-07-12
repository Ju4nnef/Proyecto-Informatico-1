int buzzerPin = 2;

void setup()

{  
  pinMode ( A4, OUTPUT);
  pinMode ( 7,  OUTPUT);
  pinMode ( 8,  OUTPUT);
  pinMode ( 3,  OUTPUT);
  pinMode ( 11,  OUTPUT);
  pinMode (buzzerPin, OUTPUT);
  
}

void loop()
{
  analogWrite (A4 , 255);
  
  delay (800);

  analogWrite (A4 , 0);
  
  tone(buzzerPin, 2000);
  
  delay (90);
  
  noTone (buzzerPin);
  
  digitalWrite( 7, HIGH ); 
  digitalWrite( 8, HIGH ); 
  
  delay (800);
  
  digitalWrite( 7, LOW ); 
  digitalWrite( 8, LOW ); 
  
  tone(buzzerPin, 2000);
  
  delay (90);
  
  noTone (buzzerPin);
 
  analogWrite ( 3  , 15);
  analogWrite ( 11 , 15);
  
  delay (800);
  
  analogWrite ( 3  , 0);
  analogWrite ( 11 , 0);
  
  tone(buzzerPin, 2000);
  
  delay (90);
  
  noTone (buzzerPin);
  
}