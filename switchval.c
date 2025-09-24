#include <stdio.h>

void switchval( int * , int *);
int main(){
	int a , b ;
	printf("A and B: ");
	scanf(" %d %d", &a,&b);
	printf("Initial value: a=%d,  b=%d\n", a, b);
	switchval( &a , &b);
	printf("Final value: a=%d,  b=%d\n", a, b);
	return 0 ;
	}
	
void switchval ( int *num1 , int *num2){
	int t;
	t= *num1;
	*num1 = *num2;
	*num2 = t;
}
	
