#include <stdio.h>

#define PASS 40
char *subs[5]= { "Maths" , "Science" , "P.E", "SST" , "Physics" };

int check( int  );

int main(){
	int *arr, size=5;
	printf("Type your marks in 5 subjects resp:\n");
	for ( int i = 0 ; i<size; i++)
	{
		printf("%s " , subs[i]);
	}
	printf("\n");
	
	for ( int i = 0 ; i<size;i++)
	{
		scanf(" %d" , &arr[i]);
	}
	
	for ( int i = 0 ; i<size; i++)
	{
		if ( check(arr[i]))
		{
			printf("You passed in %s\n" , subs[i]);
		}
		else
			printf("You failed in %s\n" , subs[i]);
	}
	
	return 0 ;
}

int check ( int marks){
	if ( marks < PASS ) 
	{
		return 0;
	}
	
	return 1;
}
