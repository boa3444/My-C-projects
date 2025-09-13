#include <stdio.h>
int main(void){
	
	int r_digit=0;
	int reverse=0;
	int num = 0;
	scanf("%d", &num);
	while (num != 0){
		r_digit = num %10;
		num /= 10;
		reverse = reverse * 10 +r_digit;
	}
	printf("%d", reverse);
	
	
	return 0;
	}
