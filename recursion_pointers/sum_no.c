#include <stdio.h>

int sum_num(int);
int main(){
	int input = 18;
	int digit = 0;
	int t = input ;
	int sum= sum_num(input);

	printf("%d",sum);
	return 0 ;
	}

int sum_num(int num){
	int sum;
	if (num == 0)
	{
		return 0;
	}
	else
	
		sum = (num%10) + sum_num((num/10));
	return sum;
}
