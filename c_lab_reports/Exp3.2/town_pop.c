#include<stdio.h>
int main(){
	int initial = 100000;
	for ( int i = 1 ; i <=10 ; i++)
	{
		initial += (initial / 10);
		printf("At the end of %d year: %d\n", i , initial);
	}

	return 0;
}
