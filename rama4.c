#include <stdio.h>


int power( int num1 , int num2 )
{
	return ( num1 * num1 * num1 ) + ( num2 * num2 * num2);
	
}

int main(){
	int soc1, soc2;
	for ( int i = 0 ; i <= 20 ; i++)
	{
		for ( int j = 0 ; j <= 20 ; j++)
		{
			soc1 = power ( i , j);
			for ( int a = i+1; a<= 20 ; a++)
			{
				for ( int b = a ; b <= 20 ; b++)
				{
					soc2 = power( a , b);
					if ( soc1 == soc2 )
						printf("%d\n" , soc1);
				}
			}
		}
	}
	return 0 ;
	}
