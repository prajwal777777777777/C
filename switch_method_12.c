#include<stdio.h>
int main(){
		int a,b,c,switchs;
		printf("Enter two numbers:\n");
		scanf("%d\n%d",&a,&b);
		printf("Sum:1\ndifrence:2\nproduct:3\ndividation:4\n");
		printf("select one[1-4]:\n");
		scanf("%d",&switchs);
		switch(switchs){
		case 1:
			c=a+b;
			printf("The sum of two number is %i",c);
			break;
		case 2:
			c=a-b;
			printf("The diffrence of two number is %i",c);
			break;
		case 3:
			c=a*b;
			printf("The product of two number is %i",c);
			break;
		case 4:
			c=a/b;
			printf("The dividation of two number is %i",c);
			break;
		default:
			printf("Please enter the valid input.");



				





		}

















}
