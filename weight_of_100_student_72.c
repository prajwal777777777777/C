#include<stdio.h>
int weight(int n[],int num){
		int i,w=0;
		for(i=0;i<num;i++){
				if(n[i]>=50 && n[i]<=60){
					w++;
				}
		}
return w;
}
int main(){
		int n[100],num,i;
		printf("Enter the number of students:\n");
		scanf("%i",&num);
		printf("Enter the weight of students:\n");
		for(i=0;i<num;i++){
		scanf("%i",&n[i]);
		}
int a=weight(n,num);
printf("======%i=======",a);
}
