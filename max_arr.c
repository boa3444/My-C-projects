#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr;
	int size, vessel;
	scanf("%d" , &size);
	for ( int i = 0 ; i < size ; i++)
	{
		scanf(" %d", &arr[i]);
	}
	vessel=size;
	while ( size > 0 )
	{
		for ( int index = 0 ; index <=  size -2 ; index ++)
		{
			if ( arr[index] > arr[index + 1] )
			{
				int t = arr[index];
				arr[index] = arr[index + 1];
				arr[index + 1] = t;
			}
		}
	size-- ;
	}
//	for ( int i = 0 ; i  < vessel ;i++)
//	{
//		printf("%d ", arr[i]);
//	}
	printf("Max : %d\n" ,  arr[vessel-1]);
	return 0 ;
}


