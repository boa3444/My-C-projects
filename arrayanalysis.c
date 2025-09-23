#include <stdio.h>
#include <stdlib.h>

int odd(int num)
{
	if ( num % 2 != 0)
	{
		return 1;
	}
	else
		return 0;
}

int main(){
/*	int array[]={};*/
	int pos=0,neg=0,odd_count=0,even=0,zero=0,zero_count = 0;
	int size;
	printf("PLease input the size of your array: ");
	scanf("%d" , &size);
	if ( size ==0)
	{
		printf("Please input a valid size of your array: \n");
		scanf("%d" , &size);
	}
	int array[size];
	printf("Now input the elements one by one with space in between: ");
	for ( int i = 0 ; i<size;i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Positive elements: ");
	for ( int i = 0 ; i<size;i++)
	{
		if ((array[i]) > 0)
		{
			printf("%d ",array[i]);
			pos+=1;
		}
	}
	if (pos > 1)
		printf("\nThere are %d positive elements.\n", pos);
	else
		printf("\nThere is %d positive element.\n", pos);
		
	printf("\nNegative elements: ");
	for ( int i = 0 ; i<size;i++)
	{
		if ((array[i]) < 0)
		{
			printf("%d ",array[i]);
			neg+=1;
		}
	}
	if ( neg > 1)
		printf("\nThere are %d negative elements.\n", neg);
	else
		printf("\nThere is %d negative element.\n", neg);
	printf("\nOdd elements: ");
	
	for ( int i = 0 ; i<size;i++)
	{
		if (odd(array[i]))
		{
			printf("%d ", array[i]);
			odd_count+=1;
		}
	}
	if ( odd_count > 1)
		printf("\nThere are %d odd elements.\n", odd_count);
	else
		printf("\nThere is %d odd element.\n", odd_count);
	printf("\nEven elements: ");
	
	for ( int i = 0 ; i<size;i++)
	{
		if (!(odd(array[i])))
		{
			printf("%d ", array[i]);
			even+=1;
		}
	}
	if (even>1)
		printf("\nThere are %d even elements.\n", even);
	else
		printf("\nThere is %d even element.\n", even);
	
	for ( int i = 0 ; i<size;i++)
	{
		if (array[i]==0)
		{
			zero = 1;
			zero_count+=1;
		}
	}
	
	if (zero)
	{
		if ( zero_count >1)
			printf("\nThere are also %d number of 0s\n", zero_count);
		else
			printf("\nThere is also one 0.\n");
	}
return 0 ;
	}
	
	
	
	
	
	
	
	
	
	
			
