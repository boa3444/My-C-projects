#include <stdio.h>

int main()
{
	struct Details
	{
		int age;
		char name[50];
		char add[50];
	};
	struct Details d;

	printf("%p , %p, %p", &d.age, d.name,d.add);
	return 0;
}
