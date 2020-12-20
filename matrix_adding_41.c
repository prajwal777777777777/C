#include<stdio.h>
int main(){
	int first_arr[3][3],second_arr[3][3],add_arr[3][3],i,j;
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
					printf("Enter the first array elements[%d][%d]:\n",i,j);
					scanf("%d",&first_arr[i][j]);

			}}
printf("-------------------------Second array-----------------------------\n");
			for(i=0;i<3;i++){
					for(j=0;j<3;j++){
							printf("Enter the second array elements[%d][%d]:\n",i,j);
							scanf("%d",&second_arr[i][j]);
					}
			}

printf("The addition of two array:\n");
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				add_arr[i][j]=first_arr[i][j]+second_arr[i][j];
				printf("%d\t",add_arr[i][j]);
}

printf("\n");
}






}
