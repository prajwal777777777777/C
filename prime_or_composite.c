#include<stdio.h>
int main(){
	int number,i,count=0;
	printf("Enter the number:\n");
	scanf("%i",&number);
	for(i=1;i<=number;i++){
			if(number%i==0){
					count++;
			}
	}
	if(count==2){
			printf("The given number is prime.");


	}
	else{
			printf("The given number is composite.");
	}
}
