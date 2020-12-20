#include<stdio.h>

int fibanoci(int n){
	int a=0,b=1,i,c;
	if(n==0){
			printf("%i",a);
	}
	else if(n<0){
			printf("Enter the positive number");
	}

	else{
			printf("%i\t%i\t",a,b);
			for(i=1;i<=n;i++){
				c=a+b;
				a=b;
				b=c;
				printf("%i\t",c);
			}
	}






}







int main(){
	int n;
	printf("Enter the number:\n");
	scanf("%i",&n);
fibanoci(n);
}
