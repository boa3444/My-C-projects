#include <stdio.h>
int k;
int * func();
int main()
{
	int *y ;
	y = func() ;
	printf("%d " , *(func()));
	return 0 ;
}

int * func ()
{
	k = 9 ;
	return ( &k);
}
