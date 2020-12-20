#include<stdio.h>
int function(int n[6]){
		int sum=0,i;
		for(i=1;i<6;i++){
				sum=sum+n[i];
		}
		return sum;
}
int main(){
	int n[6],i,f;
	printf("Enter the numbers:\n");
	for(i=1;i<6;i++){
			scanf("%i",&n[i]);
	}
	f=function(n);
	printf("%i",f);










}
