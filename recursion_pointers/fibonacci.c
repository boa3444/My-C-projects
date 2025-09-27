#include <stdio.h>

void fibonacci(int , int , int);
int main(){
	fibonacci(0 ,1 , 58);
	return 0 ;
}

void fibonacci(int f_term , int s_term, int run){
	
	if ( run == 0 )
		return;
	printf("%d ", s_term);
	fibonacci( s_term,(f_term+s_term), run -1);
}
	
