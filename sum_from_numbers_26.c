#include<stdio.h>
int main(){
	int n,r,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	do{
		r=n%10;
		sum=sum+r;
		n=n/10;

	}
while(n!=0);
printf("The sum of number is %d",sum);

}
