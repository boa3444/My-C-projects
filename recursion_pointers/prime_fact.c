#include <stdio.h>



int prime(int, int);
void check(int, int);
int main(){
	int NUMBER;
	scanf(" %d" , &NUMBER);
/*	if ( prime(2))*/
/*		printf("yes");*/
	printf("Prime factors:");
	check(NUMBER, NUMBER );
	//printf("%d" , NUMBER);
	return 0 ;
}
			

int prime(int num, int divisor){
	if ( num ==1)
	{
		return 0;
	}
	if ( divisor == 1)
	{
		return 1;
	}
	else if ( num % divisor== 0  )
	{
		return 0 ;
	}
	prime(num , divisor-1);
	
}


void check( int num, int og)
{
	if ( num ==0)
		return;	
		
	if ( (og % num == 0) && prime(num, num/2))
		printf("%d " , num);
	
	check( num -1, og);
}

	
