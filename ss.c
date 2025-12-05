#include <stdio.h>

void show(int,float);
int main()
{
//	printf("%f" , 3 * 3.3);
	void (*s)(int,float);
	s=show;
	(*s)(10,2.2);
	return 0 ;
}

void show(int i , float f)
{
	printf("%d %f" , i,f);
}
