#include <stdio.h>
#include <stdlib.h>

void copy_rev( int * , int *, int size);

int main()
{
	int *arr1, *arr2, size=4;
	arr1= ( int*) malloc ( sizeof(int) * size);
	arr2= ( int*) malloc ( sizeof(int) * size);
	for ( int i =0 ; i< size ;i++)
	{
		scanf("%d" , &arr1[i]);
	}

	copy_rev(arr1, arr2,size);
	for ( int i = 0 ;i<size;i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0 ;
}

void copy_rev(int *s , int*d,int size)
{
	int d_i=size-1;
	 for ( int s_i=0;s_i<size;s_i++)
	{
		d[d_i]=s[s_i];
		d_i--;
	}
}
