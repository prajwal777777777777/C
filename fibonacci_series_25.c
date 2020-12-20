#include<stdio.h>
int main(){
	int a,b,c,n,i;
	a=0;
	b=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if(n==1){
			printf("%d",a);

	}
	else if(n>100){
			fprintf(stderr,"INVALID NUMBER !!!");
	}
	else{
printf("%d\t",a);
printf("%d\t",b);
		for(i=2;i<=n;i++){	
				c=a+b;
				a=b;
				b=c;
				printf("%d\t",c);
				


		}

	}








}
