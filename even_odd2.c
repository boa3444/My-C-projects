#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void interchange( int *, char *);

int main()
{
	int *arr , size=5;
	arr=(int*) malloc ( sizeof(int) * size);
	for ( int i = 0;i<size;i++)
	{
		scanf("%d" , &arr[i]);
	}

	for ( int i=0;i<size;i++)
	{
		if ( arr[i] %2 ==0)
		{
			interchange(&arr[i], "even");
		}
		else if ( arr[i] % 2 != 0)
		{
			interchange(&arr[i],"odd");
		}

		else
			printf("WTH");
	}
	for ( int i = 0 ;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0 ;
}

void interchange ( int * numb_add, char * e_o)
{
	if (strcmp( e_o , "even") ==0)
	{
		*numb_add = *numb_add + 1;
	}
	else
		*numb_add = *numb_add -1;
}
