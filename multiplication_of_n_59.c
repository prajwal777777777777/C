#include<stdio.h>

int function(int n){
	int i=1,table;
	for(i=1;i<=10;i++){
		table=n*i;
		printf("%i X %i =%i\n",n,i,table);
	}




}
int main(){
	int n;
	printf("Enter the number to multiply:\n");
	scanf("%i",&n);
function(n);	


}
