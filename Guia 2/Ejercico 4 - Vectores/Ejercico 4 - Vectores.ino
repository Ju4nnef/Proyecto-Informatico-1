#define led 4

int tiempo[] = { 400 , 400 , 400 , 400 , 400 , 400 , 400 , 400 } ;
int Vled[]   = {  1  ,  0  ,  0  ,  1  ,  1  ,  0  ,  1  ,  1  } ;

void setup()
{
  	pinMode ( led , OUTPUT) ;
}

void loop()
{
	for( int i = 0 ; i < sizeof( Vled )/2 ; i++ )
	{
  		
		digitalWrite(  led,Vled[i] ) ;
      
      	delay( tiempo[i] ) ;
	}
  
}
