#include<stdio.h>
int function(int n){
	int rev;
		while(n!=0){
		rev=n%10;

		n=n/10;

		printf("%i",rev);
	}









}
int main(){
		int n;
	printf("Enter the numbers:\n");
	scanf("%i",&n);
function(n);

}
