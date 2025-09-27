#include <stdio.h>
int number ;
int prime(int );	
int main(){
	scanf("%d" , &number);
	if ( number == 0)
	{
		printf("No");
		return 0 ;
	}
	else if ( prime(number)){
		printf("yes");
	}
	return 0 ;
}
	
	

int prime( int x ){
	if ( x == 1)
		return 1;
	if ( number % x == 0 && x != number)
	{
		return 0;
	}
	
	prime ( x -1);
}

	
	
