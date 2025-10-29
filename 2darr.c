#include <stdio.h>

int main()
{
	int arr[4][2];
	for ( int i = 0 ; i < 4 ; i++)
	{
		scanf("%d %d" , &arr[i][0], &arr[i][1]);
	}

	for ( int i = 0 ; i< 4; i++)
	{
		printf("%d %d\n" , arr[i][0], arr[i][1]);
	}
	return 0 ;
}
