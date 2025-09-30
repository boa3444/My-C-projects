#include <stdio.h>

char *bye = "GoodBye(global)\n";
void say_it(){
	printf("%s" , bye);
}

void stay(){
	char *bye= "No Goodbyes(local)\n";
	printf("%s" , bye); //local bye and global bye arrays ( local is priority)
}
int main(){
	printf("%s", bye);
	say_it();
	stay();
	
	return 0 ;
}
	
