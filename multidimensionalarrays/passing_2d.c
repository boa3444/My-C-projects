#include <stdio.h>

void display ( int row,int col,int arr[row][col]);

int main()
{
	int ROW , COL;
	scanf("%d %d" , &ROW , &COL);
	int arr[ROW][COL];
	for ( int row = 0 ;row < ROW; row++)
	{
		for ( int col =0 ; col < COL; col++)
		{
			scanf(" %d" , &arr[row][col]);
		}
	}
	display( ROW ,COL,arr);
	return 0 ;
}

void display ( int row , int col,int arr[row][col])
{
	for ( int r=0; r< row; r++)
	{
		for ( int c=0 ; c< col ; c++)
		{
			printf(" %d" , arr[r][c]);
		}
		printf("\n");
	}
}
