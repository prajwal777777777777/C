#include<stdio.h>
int fact(int n){
		if(n<=1){
				return 1;
		}
		else{
				return n*fact(n-1);
		}








}
int main(){
		int n,factorial;
		printf("ENter the number:\n");
		scanf("%i",&n);
		factorial=fact(n);
		printf("The factorial of given number is %i.",factorial);
}
