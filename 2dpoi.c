#include <stdio.h>

int main()
{
	int arr[][3]={
			{1 ,2 , 3},
			{5, 9, 9},
		};
	for ( int  i= 0 ; i < 2 ; i++)
	{
		for ( int j = 0 ; j < 3 ;j++)
		{
			printf("%p " , &arr[i][j]);
		}
		printf("\n");
	}
	printf("%p" , &arr[0]);
	printf("%p" , &arr[1]);
	return 0 ;
}
