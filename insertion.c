#include <stdio.h>
#include<stdlib.h>

void insertion ( int * , int);

int main()
{
	int size , *arr;
	scanf("%d" , &size);
	arr=(int*)malloc(sizeof(int)*size);
	for ( int i=0;i<size;i++)
	{
		scanf("%d" , &arr[i]);
	}

	insertion( arr, size);;
	for ( int i=0;i<size;i++)
	{
		printf("%d " , arr[i]);
	}

	return 0 ;
}


void insertion ( int *arr, int size)
{
	int key_ind=1;
	while ( key_ind < size)
	{
		for ( int key_ind_loop = key_ind ;key_ind_loop >0;key_ind_loop--)
		{
			if ( arr[key_ind_loop] < arr[key_ind_loop -1])
			{
				int temp=arr[key_ind_loop];
				arr[key_ind_loop]=arr[key_ind_loop-1];
				arr[key_ind_loop-1]=temp;
			}
		}
		key_ind++;
	}
}

