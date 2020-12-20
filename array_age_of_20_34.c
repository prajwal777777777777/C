#include<stdio.h>
int main(){
		int array[10],i,count=0;
		printf("Enter the age of 20 students:\n");
		for (i=0;i<10;++i){
				scanf("%i",&array[i]);
		}
		printf("The age between 20-25 are:\n");
		for(i=0;i<10;++i){
				if(array[i]>=20 && array[i]<=25){
						printf("%i\n",array[i]);
						count++;
			}

	}

printf("Total count:%i",count);













}
