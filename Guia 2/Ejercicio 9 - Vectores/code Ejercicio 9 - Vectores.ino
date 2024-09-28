#define R 1
#define G 2
#define B 3
#define length(vec,tipo) sizeof(vec)/sizeof(tipo)



int tiempo[] = { 400 , 400 , 400 } ;
int L1[]     = { 122 , 234 , 21  } ;
int L2[]     = { 33  , 53  , 155 } ;
int L3[] 	 = { 200 , 255 , 12  } ;



void setup()
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  
}

void loop()
{
    for( int i = 0 ; i < length(L1,int) ; i++ )
  	{
    	analogWrite( R , L1[i] ) ;
    	analogWrite( G , L2[i] ) ;
        analogWrite( B , L3[i] ) ;
    	delay( tiempo[i] ) ;
  	}
}
