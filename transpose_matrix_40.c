#include<stdio.h>
int main(){
	int array[2][3],i,j;
	for(i=0;i<2;i++){
			for(j=0;j<3;j++){
					printf("Enter the elements of array[%d][%d]:",i,j);
					scanf("%d",&array[i][j]);
			}
	}
printf("The transpose of matrix:\n");
for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",array[j][i]);


		}
printf("\n");
}





















}
