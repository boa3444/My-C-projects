//this time i have set a global variable sankhya
#include <stdio.h>
int sankhya = 4;

void printer(){
	printf("I printed:%d\n", ++sankhya); //this increment is global too
}

int add;
// global var must be constant expression

void add_value(){
	add = sankhya + 2;
	printf("Addition value: %d\n" , add);
}

void main(){
	printer();
	printf("Main value: %d\n" , sankhya);
	add_value();
	
}
