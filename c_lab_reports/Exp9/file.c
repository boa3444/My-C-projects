#include <stdio.h>


int main()
{
	FILE *ptr;
	ptr = fopen("new.txt" ,"w");

	fprintf(ptr,"I wrote haha");
	fprintf(ptr,"Now I wrote hehe");
	fclose(ptr);
	printf("Created");
	return 0 ;
}
