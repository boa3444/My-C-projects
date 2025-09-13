#include <stdio.h>

int main(){
	int input = 0, num = 1, result = 0;
	printf("Type the n lines of palindrome triangle you want haha: ");
	scanf("%d", &input);
	for (int i = 0; i < input; i ++){
		printf("%d\n", num);
		result = num * 10 + num;
		num = result;
		}
	return 0;
	}
		
		
		
		
