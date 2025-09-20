#include <stdio.h>

float factorial(float number){
	float answer = 1;
	while ( number > 0 )
	{
		answer *= number;
		number--;
	}
	return answer;
	}
	
int main(){
	float sum = 0 , numb= 1 ;
	for ( int times = 7 ; times> 0 ; times--)
	{
		sum += numb / factorial(numb);
		numb++;
	}
	printf("%g" , sum);
	return 0 ;
	}
