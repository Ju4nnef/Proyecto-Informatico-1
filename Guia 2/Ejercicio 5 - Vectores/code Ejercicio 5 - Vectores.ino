#define G 2
#define B 4
int tiempo[] = { 400 , 400 , 400 , 400 , 400 , 400 , 400 , 400 } ;
int vG[]	 = {  1  ,  0  ,  0  ,  1  ,  1  ,  0  ,  1  ,  1  } ;
int vB[]	 = {  0  ,  1  ,  0  ,  1  ,  0  ,  0  ,  1  ,  0  } ;


void setup()
{
  pinMode ( G , OUTPUT) ;
  pinMode ( B , OUTPUT) ;
}

void loop()
{
  for( int i = 0 ; i < sizeof( vB )/2 ; i++ )
  {
    analogWrite( G , vG[i] ) ;
    analogWrite( B , vB[i] ) ;  
    delay( tiempo[i] ) ;
  }
}
