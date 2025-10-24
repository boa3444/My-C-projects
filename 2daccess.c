#include <stdio.h>

int main()
{
	int arr[2][2];
	for ( int i = 0 ; i < 2; i++)
	{
		scanf("%d %d" , &arr[i][0], &arr[i][1]);
	}
	for ( int i = 0 ; i < 2 ; i++)
	{
		for ( int j = 0 ; j< 2; j++)
		{
			printf("%p " , (*(arr + i) + j));
		}
		printf("\n");
	}
	return 0 ;
}
