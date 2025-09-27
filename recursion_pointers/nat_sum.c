#include <stdio.h>

int sum(int,int, int);
int main(){
	printf("%d" , sum(1,25,0));
	return 0 ;
	}

int sum(int num,int run, int ans){
	
	if ( run == 0)
		return ans;
	
	ans += num;
	
	sum( num+1 , run-1, ans);
}
