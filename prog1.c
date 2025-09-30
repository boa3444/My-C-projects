#include <stdio.h>

int square(int);

int main(){
	int input ;
	scanf("%d" , &input);
	square(input);
	printf("The original number was:%d\n" , input);
	return 0;
}


int square(int number){
	printf("Returned square:%d\n", number * number);
}
