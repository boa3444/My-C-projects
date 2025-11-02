#include <stdio.h>
#include <stdlib.h>

int sum(int * , int);
int main()
{
	int size , *arr;
	scanf("%d" , &size);
	arr= (int *)malloc( sizeof(int) * size);
	for ( int i = 0 ; i < size ; i++)
	{
		scanf(" %d", &arr[i] );
	}

	int total_sum = sum(arr, size);
	printf("Sum: %d" , total_sum);
	return 0 ;
}

int sum( int *arr, int size )
{
	int sum=0;
	for  ( int i = 0 ; i < size ; i++)
	{
		sum += arr[i];
	}
	return sum;
}

