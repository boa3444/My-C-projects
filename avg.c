#include <stdio.h>

void avg( int *, int *);

int main()
{
	int sum = 0, arr[30];
	for ( int i = 0 ; i< 30 ; i++)
	{
		scanf("%d" , &arr[i]);
	}

	avg( &sum , arr);
	printf("Avg: %d" , sum/30);
	return 0 ;
}

void avg( int * sum , int *array)
{
	for ( int i = 0 ; i < 30; i++)
	{
		*sum += array[i];
	}
}	
