#include <stdio.h>

int main(){
	int number = 0 ;
	for ( int i = 1 ; i<= 3 ; i++)
	{
		for ( int j = 1 ; j<= 3 ; j++)
		{
			for ( int k= 1 ; k<= 3 ; k++)
			{
				if ( i != j && i!= k && j != k )
				{
					number = i * 100 + j * 10 + k;
					printf("%d\n", number);
				}
			}
			
		}
		
	}
	return 0 ;
	}
