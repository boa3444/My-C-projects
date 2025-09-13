#include <stdio.h>
int main(void){
	int reverse = 0;
	int r_digit = 0;
	int num=0 ;
	int storage = 0;
	int i =0;
	scanf("%d", &num);
	storage = num;
	if (num < 10000 || num>99999){
		printf("Please input a 5 digit number");
		return 1;
		}
		
	else {		
	
	for (;i < 5; i++){
		r_digit = num%10;
		num /= 10;
		reverse = reverse *10 + r_digit;
		
		}
	printf("Reversed:%d\n", reverse);
	if (storage == reverse){
	printf("its same\n");
	}
	else {
	printf("no it isnt same\n");
	}
	
	}

	return 0;
	}
