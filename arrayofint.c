#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int *array ={};
	printf("Specify the size of your array: ");
	scanf("%d" , &size);
	array =  malloc(sizeof(int) * size);
	printf("Now type the respective elements with space in between: ");
	for ( int i = 0 ; i< size; i++)
	{
		scanf("%d", &array[i]);
	}

	int limit = size-1, tumbler;
	while (limit != 0)
	{
		for ( int index = 0 ; index<limit;index++)
		{
			if (array[index] > array[index+1])
			{
				tumbler =array[index];
				array[index] = array[index +1];
				array[index+1] = tumbler;
			}
		}
		limit--;
	}
/*	int index = 0;*/
/*	while ( array[index] != '\0')*/
/*	{*/
/*		printf("%d " , array[index]);*/
/*		index++;*/
/*	}*/
	printf("The second largest element here is : %d\n", array[size-2]);
	return 0 ;
	}
