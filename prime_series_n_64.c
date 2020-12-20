#include<stdio.h>
#include<stdlib.h>
int function(int n){
		int i,j,k;
		if(n>200 || n<1){
				printf("INVALID NMUBER!!!");
				exit(1);
		}
		for(i=1;i<=n;i++){
				k=0;
				for(j=1;j<=n;j++){
						if(i%j==0){
								k++;
						}
				}
				if(k==2){
						printf("%i\t",i);
				}
		
		}



}
int main(){
		int n;
		printf("Enter the number[1-200]\n");
		scanf("%i",&n);
		function(n);
}
