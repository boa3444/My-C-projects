#include <stdio.h>
int k;
int inc();
int main()
{
	inc();
	inc();
	inc();
	return 0 ;
}

int inc()
{
	auto int k = 9 ;
	printf("%d" , k);
	k++;
}
