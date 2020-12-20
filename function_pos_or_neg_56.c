#include<stdio.h>
int function(int a){
		if(a>0){
				printf("The number is positive.");
		}
		else if(a<0){
				printf("The number is negative.");
		}
		else{
				printf("The number is zero.");
		}
}
int main(){
		int a;
		printf("Enter the number:\n");
		scanf("%i",&a);

		function(a);
		



















}
