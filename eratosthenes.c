#include <stdio.h>
#include <stdlib.h>
void erato(int * , int);
int main()
{
	int *arr, index=0;
	arr=(int*) malloc( sizeof(int) * 100);
	for ( int i=1;i<101;i++)
	{
		arr[index]=i;
		index++;
	}
	erato( arr,100);

	for ( int i=0;i<100;i++)
	{
		if ( arr[i] != 0)
			printf("%d " , arr[i]);
	}
	return 0 ;
}

void erato(int *arr, int size)
{
	for ( int i=0;i< size;i++)
	{
		int numb = arr[i];
		if (arr[i]== 1 )
			continue;
		if ( arr[i]==0)
			continue;
		else
		{
			for ( int in_loop= i+1;in_loop< size;in_loop++)
			{
				if ( arr[in_loop]%numb ==0)
				{
					arr[in_loop]=0;
				}
			}
		}
	}
}
