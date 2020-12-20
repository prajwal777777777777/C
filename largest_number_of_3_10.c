#include<stdio.h>
int main(){
	int first_input;
	int second_input;
	int third_input;
	printf("enter the first number:\n");
	scanf("%i",&first_input);
	printf("Enter the second number:\n");
	scanf("%i",&second_input);
	printf("Enter the third number:\n");
	scanf("%i",&third_input);
	if(first_input>second_input && first_input>third_input){
		printf("%i is greatest",first_input);


	}
	else if(second_input>first_input && second_input>third_input){
	printf("%i is greatest.",second_input);




	}
	else{
	printf("%i is greatest.",third_input);


	}







}
