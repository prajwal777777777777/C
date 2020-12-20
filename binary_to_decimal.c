#include<stdio.h>
int main(){
	int binary,rem,weight=1,decimal=0;
	printf("Enter the binary:\n");
	scanf("%i",&binary);
	while(binary!=0){
	rem=binary%10;
	binary=binary/10;
	decimal=decimal+weight*rem;
	weight=weight*2;
	}
printf("Decimal:%i",decimal);












}
