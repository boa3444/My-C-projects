#include <stdio.h>


int main()
{
	int arr[2][2];
	for ( int r = 0 ;r< 2 ; r++)
	{
		for ( int c=0; c < 2; c++)
		{
			scanf("%d" , (*(arr + r) + c));
		}
	}
	int ( * p ) [2];
	int *pint;
//	for ( int r = 0 ; r<2;r++)
//	{
//		for ( int c =0 ;c<2;c++)
//		{
//			printf("%d" , *(*(arr + r) + c));
//		}
//		printf("\n");
//	}
	int scatter[2]= {2,3};
	p= ( int (*) [2])&scatter[0];
	printf("%p\n" , p);
	printf("%p" , &scatter[0]);
//	for ( int i =0;i< 2;i++)
//	{
//		printf("%d" , *(p + i));
//	}
	return 0 ;
}
