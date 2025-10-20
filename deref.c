#include <stdio.h>
#include <stdlib.h>

void display( int * );

int main()
{
	int size , *arr;
	scanf("%d" , &size);
	for ( int i =  0 ; i < size ; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	for  ( int i = 0 ; i < size ; i++)
	{
		display(&arr[i]);
	}
	return 0 ;
}

void display(int *ele)
{
	printf("%d " , *ele);
}
