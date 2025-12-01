#include <stdio.h>

int gcd (int , int);
int main()
{
	int num1 , num2;
	scanf("%d %d" , &num1 , &num2);
	int GCD = gcd ( num1 , num2);
	printf("%d" , GCD);
	return 0 ;
}

int gcd ( int num1  , int num2)
{
/*	int remainder = num1%num2;*/
	if ( num2 == 0)
	{
		return num1;
	}

	else
		return gcd(num2, num1 % num2);
}
