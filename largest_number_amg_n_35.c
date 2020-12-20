#include<stdio.h>
int main(){
	int n,num[100],i,max;
	printf("Enter the list of number:\n");
	scanf("%i",&n);
	printf("Enter the numbers:\n");
	for(i;i<n;i++){
	scanf("%i",&num[i]);
	}
	max=num[0];
	for(i=1;i<n;i++){
			if(num[i]>max){
					max=num[i];
			}



	}
printf("The largest number is %i",max);











}
