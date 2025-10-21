#include <stdio.h>
#include <stdlib.h>
void display(int );

int main()
{
	int *arr, size;
	scanf("%d" , &size);
	arr= (int*) malloc ( sizeof(int) * size);
	for ( int i = 0 ; i< size ; i++)
	{
		scanf("%d", &arr[i]);
	}

	for ( int i = 0 ; i < size ; i++)
	{
		display( arr[i]);
	}
	return 0 ;

}

void display( int element)
{
	printf("%d " , element);
}
