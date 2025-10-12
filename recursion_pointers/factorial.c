#include <stdio.h>

int fact(int);
int main()
{
	int numb;
	scanf("%d" , &numb);
	int f =fact(numb);
	printf("%d" , f);
	return 0 ;
}

int fact(int numb)
{
	if ( numb == 1)
		return 1;
	else
		return ( numb * fact(numb -1));
	
}

