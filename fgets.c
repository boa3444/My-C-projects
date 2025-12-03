#include <stdio.h>
#include <string.h>


int main()
{
	char buff[100];
	int n=11;
	fgets(buff,n,stdin);
	printf("%s\n" , buff);
	int len = strlen(buff);
	printf("%d" , len);
	return 0 ;
}


