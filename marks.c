#include <stdio.h>

float average( float num1, float num2, float num3)
{
	return (num1 + num2+num3)/3;
}

int percentage( float num1, float num2, float num3)
{
	float value = (num1+num2+ num3)/ 300;
	return value * 100;
}

int main(){
	
	float sub1,sub2,sub3;
	printf("Type your marks in 3 subjects out of 100: ");
	scanf("%f %f %f", &sub1,&sub2,&sub3);
	float avg = average(sub1,sub2,sub3);
	float pct= percentage(sub1,sub2,sub3);
	printf("YOur average marks:%g\nYour percentage: %g%\n", avg, pct);
	return 0 ;
}
	
