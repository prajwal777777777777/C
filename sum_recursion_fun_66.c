#include<stdio.h>
int function(int n){
		if(n>1){
				return n+function(n-1);
		}
		else{
				return 1;
		}

}
int main(){
	int n,f;
	printf("Enter the number:\n");
	scanf("%i",&n);
	f=function(n);
	printf("%i",f);





}
