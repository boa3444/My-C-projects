#include <stdio.h>
#include <ctype.h>
#include <string.h>


void toUpperCase( char arr[])
{	
	int i = 0;
	while ( arr[i] != '\0' )
	{
		arr[i] = toupper(arr[i]);
		i++;
	}
}

int factorial(int number)
{
	int factorial= 1, og = number;;
	for (int count= 1;count<=og;count++)
	{
		factorial*= number;
		number--;
	}
	return factorial;
}

int prime(int number)
{
	for (int divisor = 2; divisor < number;divisor++)
	{
		if ( number % divisor==0)
		{
			return 0;
		}
	}
	return 1 ;
}

int even(int number)
{
	if ( number %2 == 0)
	{
		return 1;
	}
	else
		return 0;
}

int odd(int number)
{
	if ( number % 2 != 0)
	{
		return 1;
	}
	else
		return 0 ;
}

int main(){
	int input_number;
	char exit[2];
	char operation[20];
	int i = 0, answer = 0;
	do
	{
		printf("Type the operation name ( factorial , check prime , odd/even ): ");
		scanf(" %[^\n]" , operation);
		printf("Type the number for the operation: ");
		scanf(" %d" , &input_number);
		toUpperCase(operation);
/*		while ( operation[i] != '\0')*/
/*		{*/
/*			printf("%c", operation[i]);*/
/*			i++;*/
/*		}*/

		if ( strcmp(operation,"FACTORIAL") == 0)
		{
			answer = factorial(input_number);
			printf("%d" , answer);
		}
		else if ( strcmp(operation,"CHECK PRIME") == 0)
		{
			if (prime(input_number))
				printf("Yes its prime\n");
			else
				printf("NO its not prime\n");
		}
		else if ( strcmp(operation,"ODD/EVEN") == 0)
		{
			if ( even(input_number ))
				printf("Its even\n");
			if ( odd(input_number))
				printf("Its odd\n");
		}
		else
		{
			printf("**Input Correctly please**\n");
		}
		
		printf("You wanna continue? (y/n):");
		scanf(" %2[^\n]", exit);
		
	} 
	while ( strcmp(exit , "y" ) == 0 || strcmp(exit, "Y") == 0);
	return 0;
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
