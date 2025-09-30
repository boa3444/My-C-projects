#include <stdio.h>
#include <string.h>

void icecream(){
	static int chocochips=0; //not reinialized
	int cone = 0;   //reintialized
	static int scoop=0;        
	chocochips += 3;
	cone ++;
	scoop++;
	printf("Your icecream now has %d cone, %d scoops and %d chocochips\n", cone, scoop, chocochips);
}
	
int main(){
	printf("Your icecream is in making sir/ma'am:\n");
	char input;
	do
	{
	icecream();
	printf("You want more scoops and chips? (y/n: )");
	scanf(" %c", &input);
	}
	while
		(input == 'y');
	return 0 ;
}
