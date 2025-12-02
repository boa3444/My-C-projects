#include <stdio.h>

void * xstrcpy( char * , char*);

int main()
{
	char *s ="hello", t[10];
	xstrcpy(s, t);
	for ( int i=0;i<5;i++)
	{
		printf("%c" , t[i]);
	};
	return 0 ;
}

void *xstrcpy( char *s, char *t)
{
	while ( *s != '\0')
	{
		*t=*s;
		t++;
		s++;
	}
}
