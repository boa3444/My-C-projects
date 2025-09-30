#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void rvs(int * , int);
int main(){
	int *arr, size;
	printf("Type size of array:");
	scanf("%d" , &size);
	
	arr=malloc(sizeof(int) * size);
	printf("You can type %d elements now with spaces in b/w: ", size);
	for ( int i = 0 ; i<size; i++)
	{
		scanf(" %d", &arr[i]);
	}
	rvs( arr,size);
	printf("Reversed array:");
	for ( int i = 0 ; i <size; i++)
	{
		printf(" %d" , arr[i]);
	}
	return 0 ;
}
	
void rvs(int arr[],int length)
{
	int fwd=0, bckd=length-1,t;
	
	while (true)
	{
		t=arr[fwd];
		arr[fwd]= arr[bckd];
		arr[bckd]=t;
		fwd++;
		bckd--;
		if ( fwd > bckd)
			return;
	}
	
}
