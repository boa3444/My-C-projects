#include <stdio.h>

//initializing a 2d array

int main()
{
	int row,column;
	scanf("%d %d" , &row , &column);
	int arr[row][column];
	for ( int r= 0 ; r < row ; r++)
	{
		for ( int c = 0 ; c< column ; c++)
		{
			scanf("%d" , &arr[r][c]);
		}
	}
	for (int r= 0 ; r < row ; r++)
	{
		for ( int c = 0 ; c < column ; c++)
		{
			printf("%d " , arr[r][c]);
		}
		printf("\n");
	}

	return 0 ;
}
