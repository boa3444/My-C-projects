#include <stdio.h>

#define METER 1000
void convert(float *);
int main(){
	float input ;
	scanf("%f" , &input);
	convert(&input);
	printf("Meters: %g\n", input);
	return 0 ;
}

void convert ( float *km)
{
	float t= *km;
	t *= METER;
	*km = t;
	return;
}
