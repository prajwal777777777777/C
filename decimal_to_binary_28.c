#include<stdio.h>
int main(){
	//12--1100
	int decimal,rem,binary=0,weight=1;
	printf("Enter the number:\n");
	scanf("%i",&decimal);
	while(decimal!=0){
	rem=decimal%2;
	decimal=decimal/2;
	binary=binary+weight*rem;
	weight=weight*10;
	}
printf("Binary=%i",binary);






}
