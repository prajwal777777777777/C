#include<stdio.h>
int main(){
		int func(int a,int b)
		{
				if(a>b){
					return a;
				}
				else{
					return b;
				}
		}
int a,b,c;
printf("Enter the first number:\n");
scanf("%i",&a);
printf("Enter the second number:\n");
scanf("%i",&b);

printf("the heighest number is %i",func(a,b));

















}
