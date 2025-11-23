#include <stdio.h>
#include <stdlib.h>
int sort( int * , int );

int main()
{
	int size , *arr;
	scanf("%d" , &size);
	arr= ( int * ) malloc( sizeof(int) * size);
	for ( int i =0 ;i< size; i++)
	{
		scanf("%d" , &arr[i]);
	}

	sort( arr, size);
	for ( int i = 0 ;i < size ;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0 ;
}

int sort ( int *arr , int size)
{
	while ( size > 0)
	{
		for ( int i = 0; i< size-1;i++)
		{
			if ( arr[i] < arr[i+1])
			{
				int temp = arr[i];
				arr[i]= arr[i+1];
				arr[i+1]=temp;
			}

		}
		size--;
	}
}
