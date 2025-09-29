#include <stdio.h>

#define MAX 10

void maximum(int arr[], int size)
{
	int t;
	
	for ( int run=0; run < MAX -1; run++)
	{
		for ( int i = 0 ; i < size-1; i++)
		{
			if ( arr[i] > arr[i+1])
			{
				t= arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = t;
			}
			
			
		}
		size--;
	}
	}
	
		
int main(){
	
	int element, *arr;
	printf("Type 10 elements and press enter after each element:");
	for ( int n = 0 ; n< MAX;n++)
	{
		scanf(" %d\n" , &arr[n]);
	}
	
	maximum(arr, MAX);
	printf("The maximum element is:\n%d\n", arr[MAX -1]);
	return 0  ;
}
	
