#include <stdio.h>

int add( int , int);
int subt( int , int );
int mult( int , int);
int div( int , int);

int index( char );
int main()
{
	int num1 , num2;
	char oper ;
	// Array of function pointers
	int ( *operator[4]) ( int, int) = { add , subt , mult , div};
	scanf("%d %d %c" , &num1 , &num2 , &oper);
	int r = index( oper);
	if ( r != -1)
	{
		int result = operator[r](num1 , num2);
		printf("%d" , result);
	}

	//printf("%d" , r);
	return 0 ;
}

int add(int num1 , int num2 )
{
	return num1 + num2 ;
}

int subt(int num1 , int num2 ) 
{
	return num1 - num2;
}

int mult(int num1 , int num2 )
{
	return num1 * num2;
}

int div ( int num1 , int num2 )
{
	return num2 != 0 ? num1/num2 : 0;
}

int index( char oper)
{
	switch (oper)
	{
		case '+' :
		return 0 ;
		
		case '-':
		return 1 ;
		
		case '*' :
		return 2;
		
		case '/':
		return 3;
		default:
		return -1;

	}
}
