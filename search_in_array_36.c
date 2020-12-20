#include<stdio.h>
int main(){
	int n,num[100],i,x,count;
	printf("Enter the numbers in list[1-100]:\n");                   //number in lists          
	scanf("%i",&n);

	printf("Enter the numbers:\n");                                 //Entering the number
	for(i=0;i<n;++i){
		scanf("%i",&num[i]);
	}
	printf("Enter the number to search:\n");                       //number to search
	scanf("%i",&x);

	for(i=0;i<n;++i){
			if(x==num[i]){
					count=1;
					break;
			}







	}

			if(count==1){
					printf("The number is in lists.");
			}
			else{
					printf("The number not in lists.");
			}




















}
