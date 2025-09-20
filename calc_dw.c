#include <stdio.h>

void calc(int num1 , int num2 , char oper){
		switch (oper)
		{
		case '+':
			printf("Sum:%d\n", num1 + num2);
			break;
		case '/':
			printf("Division:%d\n", (num1 / num2));
			break;
		case '*':
			printf("Multiply:%d\n", (num1 * num2));
			break;
		case '-':
			printf("Subraction:%d\n", num1 - num2);
			break;
		case '%':
			printf("Modulus:%d\n", (num1 % num2));
			break;
		}
	}
int main(){
	int num1 , num2 ;
	char oper, input; 
	do 
	{
	printf("Type two numbers followed by the operation ( + - / * ) : \n");
	scanf("%d %d %c",&num1 ,&num2, &oper);
	calc( num1 , num2, oper);
	printf("You Wanna Continue? (y/n): ");
	scanf(" %c" , &input);
	}
	while
	(input == 'y');
	return 0 ;
	}
	
