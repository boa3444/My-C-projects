#include <stdio.h>
#include <stdlib.h>

void reverse_arr(int * , int);
int main()
{
	int *arr, size ;
	scanf("%d", &size ) ;
	arr= (int *)malloc ( sizeof(int)  * size);
	for ( int i = 0; i < size ; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	reverse_arr(arr, size);
	printf("Reversed : \n" );
	for ( int i = 0 ; i < size; i++)
	{
		printf(" %d" , arr[i]);
	}

	return 0 ;
}

void reverse_arr(int *arr , int len )
{
	int gap = len-1;
	for  ( int f = 0 ; f< len/2 ; f++)
	{
		int t = arr[f];
		arr[f]= arr[f + gap];
		arr[f+gap]=t;
		gap -= 2;
		if ( gap <= 0)
		{
			return;
		}
	}

}
//		for ( int i = 0 ; i < len; i++)
//		{
//			printf(" %d" , arr[i]);
//		}
//		printf("\n");
//
//		gap -= 2;


