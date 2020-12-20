#include<stdio.h>
int function(int n){
		if(n>=3){
				return function(n-1)+function(n-2);

		}
		else{
				return 1;
		}
}
int main(){
		int n,i;
		printf("Enter the number:\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
				printf("%i\t",function(i));
		}

}
