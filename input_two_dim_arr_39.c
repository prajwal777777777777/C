#include<stdio.h>
int main(){
int array[3][3],i,j;
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				printf("Enter the elements[%d][%d]:",i,j);
				scanf("%d", &array[i][j]);
		}

}
printf("Elements of 3 X 3 array :\n");
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",array[i][j]);
		}
		printf("\n");





}

















}
