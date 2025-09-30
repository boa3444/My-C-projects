#include <stdio.h>

int main(){
	char *name = "Divyanshi";
	int age = 17;
	
	{
		int weight = 100;
		printf("Name: %s, Age: %d, Weight: %d\n", name, age, weight);
	}
	// WEight is unaccessible here:
	//printf("Name: %s, Age: %d, Weight: %d\n", name, age, weight);
	printf("Name: %s, Age: %d\n", name, age);
	
	return 0 ;
}
