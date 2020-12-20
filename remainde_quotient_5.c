#include<stdio.h>
int main(){
	int first;
	int second;
	printf("Enter the first number:\n");
	scanf("%i",&first);
	getchar();
	printf("Emter the second numnber:\n");
	scanf("%i",&second);
	int modulus=first%second;
	int remainder=first/second;
	printf("The modulus of first number by second is %i\nThe remainder of first number by second is %i",modulus,remainder);







}
