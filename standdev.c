#include <stdio.h>
#include <math.h>

float power ( float num, int pow)
{
	float result = 1;
	for ( int i = 0 ; i<pow; i++)
	{
		result *= num;
	}
	return result;
}

float sum(float num1 , float num2 , float  num3, float num4, float num5)
{
	return ( num1 + num2 + num3 + num4+ num5);
}

float mean(float num1 , float num2 , float  num3, float num4, float num5)
{
	return (sum(num1,num2,num3,num4,num5)/5) ;
}
	
float stnddev(float num1 , float num2 , float  num3, float num4, float num5)
{
	float arr[5] = {num1,num2,num3,num4,num5};
	float meanagain= mean(num1,num2,num3,num4,num5);
	float summission= 0, variance;
	for ( int i = 0 ; i<5; i++)
	{
		summission += power((arr[i]-meanagain),2);
	}
	variance = summission / 5.0;
	return sqrt(variance);
}
	
int main()
{
	float i,e,f,g,h;
	scanf("%f %f %f %f %f", &i, &e,&f,&g,&h);
	//float mean,sum,stddev;
	float mean_val=mean(i,e,f,g,h);
	float sum_val=sum(i,e,f,g,h);
	float stddev= stnddev(i,e,f,g,h);
	printf("Sum: %g\n" , sum_val);
	printf("Mean: %g\n", mean_val);
	printf("Standard dev: %g\n",stddev);
	return 0 ;
}
