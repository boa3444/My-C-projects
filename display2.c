#include <stdio.h>
#include <stdlib.h>

void display( int , int *);

int main()
{
	int size , *arr;
	scanf("%d" , &size);
	arr=(int*) malloc ( sizeof(int) * size);
	for ( int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	display(size,arr);
	return 0 ;
}




void display( int size , int *array)
{
	for ( int i = 0 ; i < size ; i++)
	{
		printf(" %d", array[i]);
	}
}
