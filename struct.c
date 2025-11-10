#include <stdio.h>
#include <string.h>

struct database{
	char name[10];
	int age;
	long long adhar;
};

int main()
{
	struct database d= {.age=20,.adhar=2282929392838};
	strcpy(d.name, "Divyanshi");
	printf("Age: %d, Adhar: %lld, Name: %s\n" , d.age, d.adhar, d.name);

	return 0 ;
}
