#include <stdio.h>


void printer(){
	printf("%d", sankhya +1);
}

void iamanumb(){
	int sankhya = 7; // absolutely local
	printer();
}

int add= sankhya + 10; //global

void main()
{
	printf("%d" , add);
}
