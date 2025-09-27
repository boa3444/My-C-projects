#include <stdio.h>

int factorial(int,int);
int main(){
	printf("%d" ,factorial(5, 1));
	return 0 ;
	}
	
int factorial(int number, int ans){
	if ( number == 1 ) 
		return ans;
	
	ans *= number;
	factorial( number -1, ans);
}
