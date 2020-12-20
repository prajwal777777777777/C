#include<stdio.h>

int unction(int n){
		int i,sum=0;
		for(i=1;i<=n;i++){
				sum=sum+i;
		}
		return sum;
}
int main(){
	int n;
	printf("Enter the final number:\n");
	scanf("%i",&n);
	printf("%i",unction(n));

}
