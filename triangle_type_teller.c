#include <stdio.h>
#include <stdbool.h>

	
int main(void){
	int p= 0;
	int b = 0;
	int h = 0;
	printf("Type first side:");
	scanf("%d", &p);
	printf("Type second side:");
	scanf("%d", &b);
	printf("Type third side:");
	scanf("%d", &h);
	if (p+h > b && b+h > p && p+b > h){
		printf("This triangle exists\n");
		}
	else {
		printf("This triangle does not exists");
		return 0;
		}
		
	if (h*h == b*b + p*p){
		printf("This is a right angled triangle\n");
		}
	else if (h==p || h==b || p==b){
		printf("This triangle is isoceles triangle\n");
		
		}
	else if ( h==p && h==b && b==p){
	printf("This is an equilateral triangle");
	}
	
	else {
	printf("This is a scalene triangle");
	}
		
	return 0;
	
	}
		
		
		
		
		
		
		
		
		
	
