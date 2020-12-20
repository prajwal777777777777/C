#include<stdio.h>
int main(){
	int number,rev=0;
	printf("Enter the number:\n");
	scanf("%d",&number);
	int temp=number;
	while(number!=0){
		rev=rev*10+number%10;   //for first 0*10+123%10=3--3---------for second 3*10+2--32---------for third 320+1=321.
		number=number/10;      //for first=123/10=12--------------for seoncd 2---------------for thirrd 1/10=0(stop)
	}

	if(rev==temp){
			printf("Its plaindrome number");
	}
	else{
			printf("Its not plaindrome number.");
	}














}
