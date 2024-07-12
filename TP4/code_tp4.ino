#define TMP A2
#define LDR A5

#define color_rojo 2
#define color_azul 3
#define color_verde 4


void setup()
{
  pinMode(TMP, INPUT ); //Sensor de temperatura
  pinMode(LDR, INPUT ); //Sensor de luz ambiental
  
  pinMode(color_rojo  , OUTPUT);  
  pinMode(color_azul , OUTPUT);
  pinMode(color_verde , OUTPUT);
  
  Serial.begin( 9600 );
}

void loop()
{
   
  //  Senseor de Luz 
  
  int x = analogRead(LDR);
  int luz = map( x , 1 , 310 , 100 , 0);
   
  Serial.print("El nivel de luz actual es: ");	 
  Serial.print( luz );
  Serial.print("%");
  
  // Sensor de temperatura
  
  int volt = analogRead(TMP);
  float senial = volt * 5.0 / 1024;
  float temperatura = senial * 100 - 50;
  
  Serial.print(" y la temperatura actual: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  
 // Parte de los if
  
  if (luz >= 30 && luz <= 70 ) {
     
  if (temperatura > 90) {

	digitalWrite( color_rojo,  HIGH ); 
  
  	digitalWrite( color_verde, LOW );
  
  	digitalWrite( color_azul , LOW );
  } 
  
else if (temperatura >= 18 && temperatura <= 90) {
   
	digitalWrite( color_verde, HIGH);
  
  	digitalWrite( color_rojo, LOW );
  
  	digitalWrite( color_azul, LOW );
 
  }
  
else if (temperatura < 18 ) {
    
    digitalWrite( color_azul, HIGH);
  
  	digitalWrite( color_rojo, LOW );
  
  	digitalWrite( color_verde, LOW );
    
  }
    
  }
  
  if ( luz < 30 ) {
    
    digitalWrite( color_rojo , LOW );
    digitalWrite( color_azul , LOW );
    digitalWrite( color_verde, LOW );
    
  }
  
  else if (luz > 70 ) {
    
    digitalWrite( color_rojo , LOW );
    digitalWrite( color_azul , LOW );
    digitalWrite( color_verde, LOW );
    
  }
    
}