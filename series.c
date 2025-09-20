#include <stdio.h>

float pow_this(float num, int p)
{
	float pow = 1;
	for ( int x = 1; x<= p ; x++)
	{
		pow *= num;
	}
	return pow;
}
int main(){
	float input = 0 ;
	float sum , final_sum = 0;
	scanf("%f" , &input);
	sum = (input -1) / input;
	final_sum = sum;
	//printf("%f\n" , sum);
	
	for ( int power = 2 ; power <= 7 ; power++)
	{
		final_sum += ((1.0 / power) * pow_this(sum , power));
		//printf("%f\n", pow_this(sum , power));
	}
	printf("%f\n" , final_sum);
	
	return 0 ;
	}

