#include<stdio.h>


		int func(int a,int b,int c)
		{
				if(a<b && a<c)
				{
						return a;
				}
				else if(b<a && b<c)
				{
						return b;
				}
				else{
						return c;
				}


		}

int main(){
	int a,b,c,d;
	printf("Enter the first number:\n");
	scanf("%i",&a);


	printf("Enter the second number:\n");
	scanf("%i",&b);


	printf("Enter the third number:\n");
	scanf("%i",&c);

	d=func(a,b,c);
	printf("The smallest number among three is %i",d);











}
