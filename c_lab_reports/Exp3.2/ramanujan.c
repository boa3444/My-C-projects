#include <stdio.h>


int power( int num1 , int num2 )
{
	return ( num1 * num1 * num1 ) + ( num2 * num2 * num2);
	
}


int main()
{
	int number = 0 , flag = 0;
	for ( ; ; number ++)
	{
		for ( int f_dig = 0 ; power( f_dig , 0 ) < number ; f_dig++)
		{
			if (f_dig > 21)
				return 0 ;
			for ( int s_dig = f_dig; power( s_dig , 0 ) < number ; s_dig++)
			{
				if ( power( f_dig , s_dig ) == number)
				{
					flag += 1 ;
					if (flag == 2)
					{
						printf("%d\n" , number);
						break;
					}
				}
			
			}
		}
		
		flag = 0 ;
	}
	return 0 ;
	}
