#include<stdio.h>
int factorial(int n){
		int i,fact=1;
		if(n<=0){
				printf("The factorial of %i is 1");
		}
		else{
		for( i=1;i<=n;i++ ){
				fact*=i;
				}
	printf("The factorial of %i is %i",n,fact);

}}
int main(){
		int n;
		printf("Enter the number for factorial:\n");
		scanf("%i",&n);
		factorial(n);
}
