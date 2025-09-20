#include <stdio.h>


int main(){
	int deadend = 7;
	
	for ( int line = 1 ; line <= 7 ; line++)
	{
		for ( int number = 1 ; number <=7 ; number++)
		{
			if ( number > deadend )
				printf(" ");
			else
				printf("%d" , number);
				
			if ( number == 7 )
			{
				for ( int rebmun = 6 ; rebmun > 0 ; rebmun--)
				
					{
						if ( rebmun > deadend)
							printf(" ");
						else
							printf("%d" , rebmun);
					}
			}
			
		}
		
		printf("\n");
		deadend--;
	}
	return 0 ;
	}
				
