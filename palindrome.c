#include <stdio.h>

int is_palin(int number){
		
	int r_digit=0;
	int reverse=0;
	int og_num = number;
	while (number != 0){
		r_digit = number %10;
		reverse = reverse * 10 +r_digit;
		number /= 10;
	}
	
	return reverse == og_num;
	
	}
	
int main(){
	int num = 0, i = 0,input = 0;
	printf("Type the nth palindrome you want: ");
	scanf("%d", &input);
	for (; i <= input; num++)
	{
	
		if (is_palin(num))
		{
			printf("%d\n" , num);
	
			i += 1;
			
		}
	}
	return 0;
		
	}
		
