#include<stdio.h>
int main(){

	int n,num[100],i,j,temp;
	printf("Enter the list of numbers[1-100]:\n");
	scanf("%i",&n);
	printf("Enter the numbers:\n");
	for(i;i<n;i++){
		scanf("%i",&num[i]);
	}
	for(i=0;i<n-1;i++){

			for(j=i+1;j<n;j++){
				if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;



			}

	}}
	printf("numbers in ascending order:\n");
	for(i=0;i<n;i++){
			printf("%i\n",num[i]);
	}












}
