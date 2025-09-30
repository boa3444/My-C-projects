#include <stdio.h>


void inc(int *, int);
int main(){
	int sal, bonus;
	scanf("%d %d", &sal,&bonus);
	printf("The salary: %d, bonus: %d\n" , sal, bonus);
	inc(&sal,bonus);
	printf("Updated salary:%d\n", sal);
	return 0 ;
}

void inc( int *salary, int bonus){
	
	*salary = *salary + bonus;
}
