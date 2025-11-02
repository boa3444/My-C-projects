#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merger(int * , int *, int,int);

int main()
{
	int size1 , *arr1 , *arr2, size2;
	scanf("%d %d" , &size1 , &size2);
	arr1=(int *) calloc ( sizeof(int) , size1);
	arr2=(int * ) calloc ( sizeof(int), (size2+size1));

	for ( int i = 0 ; i < size1 ; i++)
	{
		scanf(" %d" , &arr1[i]);
	}

	for ( int i = 0 ; i < size2; i++)
	{
		scanf(" %d" , &arr2[i]);
	}

	merger( arr1 , arr2,size1, size2);
//	printf("size1 : %lu" , sizeof(arr1));
	printf("Merged array:");
	for ( int i = 0 ; i < (size1 + size2 ); i++)
	{
		printf(" %d" , arr2[i]);
	}
	printf("\n");
	return 0 ;
}

void merger ( int * src, int *dest,int size_s,int size_d)
{
	memcpy( &dest[size_d] , src ,size_s + sizeof(int));
}
