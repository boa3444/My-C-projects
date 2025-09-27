#include <stdio.h>

void value_shift( int * , int * , int*);

int main(){
	int x = 2 , y = 5 , z = 9;
	printf("%d % d% d" , x,y,z);
	value_shift( &x, &y,&z);
	printf("%d % d% d" , x,y,z);
	return 0 ;
}

void value_shift(int *num1 , int *num2,int *num3){
	int value = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = value;
	}
