#include <stdio.h>

float multiply(int num1 , float num2)
{
	return num1 * num2;
}

int main(){
	int num1;
	float num2;
	scanf("%d %f" , &num1 , &num2);
	printf("MUltiplication: %g", multiply(num1 , num2));
	return 0 ;
	}
