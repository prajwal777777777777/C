#include<stdio.h>

int evenodd(int a){
		if(a%2==0){
				printf("The number is even");
		}
		else{
				printf("The number is odd.");
		}
}
int main(){
	int a;
	printf("Enter the number:\n");
	scanf("%i",&a);
	evenodd(a);

}
