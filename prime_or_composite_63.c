#include<stdio.h>
int prime(int n){
		int i,j,count,k;
		for(i=1;i<=n;i++){
				k=0;
				for(j=1;j<=n;j++){
						if(i%j==0){
							k++;
						}
				}
		}
		if(k==2 || k==1){
				printf("The number is prime.");

		}
		else if(k>2){
				printf("The number is composite.");
		}

		else {
				printf("PLease enter number greater than 0 and less than 100.");

		}
	



}

















int main(){
		int n;
	printf("Enter the number:\n");
	scanf("%i",&n);
	prime(n);
}
