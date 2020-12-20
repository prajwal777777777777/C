#include<stdio.h>
#include<string.h>
int main(){

	char word[20][20],temp[20];
	int i,j,n;

	printf("Enter the number of words:\n");
	scanf("%i",&n);

	
	
	printf("Enter the words:\n");
	for(i=0;i<n;i++){
	scanf("%s",&word[i]);
	}

	

	for(i=0;i<n-1;i++){


			for(j=i+1;j<n;j++){
				
					if(strcmp(word[i],word[j])>0){
						strcpy(temp,word[i]);
						strcpy(word[i],word[j]);
						strcpy(word[j],temp);
					}


			}



	}

printf("The ascending order of words is:\n");

for(i=0;i<n;i++){
		printf("%s\n",word[i]);
}






























}
