#define A 13
#define B 12
#define C 10
#define D 8
#define E 6 

#define length(vec,tipo) sizeof(vec)/sizeof(tipo)
	
int tiempo[] = { 200 , 200  , 200  , 200  , 200  , 200  , 200  , 200  } ;
int vA[]	 = { LOW , HIGH , HIGH , HIGH , HIGH , HIGH , HIGH , HIGH } ;
int vB[]	 = { LOW , LOW  , HIGH , HIGH , HIGH , HIGH , HIGH , HIGH } ;
int vC[]	 = { LOW , LOW  , LOW  , HIGH , HIGH , HIGH , HIGH , HIGH } ;
int vD[]	 = { LOW , LOW  , LOW  , LOW  , HIGH , HIGH , HIGH , HIGH } ;
int vE[]	 = { LOW , LOW  , LOW  , LOW  , LOW  , HIGH , HIGH , HIGH } ;
void setup()
{
  pinMode( A , OUTPUT);
  pinMode( B , OUTPUT);
  pinMode( C , OUTPUT);
  pinMode( D , OUTPUT);
  pinMode( E , OUTPUT);
}

void loop()
{
  for( int i = 0 ; i < length(vA,int) ; i++ )
  {
    	digitalWrite( A , vA[i] ) ;
    	digitalWrite( B , vB[i] ) ;
        digitalWrite( C , vC[i] ) ;
    	digitalWrite( D , vD[i] ) ;
    	digitalWrite( E , vE[i] ) ;
    	delay( tiempo[i] ) ;
  }
}
