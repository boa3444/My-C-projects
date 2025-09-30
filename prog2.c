#include <stdio.h>

void swap(int *, int *);

int main(){
	int numb1,numb2;
	scanf("%d %d" , &numb1,&numb2);
	printf("Original: %d %d\n", numb1 , numb2);
	swap( &numb1, &numb2);
	printf("Swapped: %d %d\n", numb1 , numb2);
	return 0 ;
	}
	
void swap(int *numb1, int *numb2){
	
	int t = *numb1;
	*numb1=*numb2;
	*numb2= t;
}
