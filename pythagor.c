#include <stdio.h>


int main(){
	int h , p , b  ;
	for ( h = 0; h <= 30 ; h++)
	{
		for ( p = 0; p <= 30 ; p++)
		{
			for (b = 0 ; b <= 30 ; b++)
			{
				if (( h*h == p*p + b*b ) && (h< p+b))
					printf("Triplet:\n P:%d B:%d H:%d\n" , p ,
					b , h);
			}
			
		}
		
	}
	return 0 ;
	}
