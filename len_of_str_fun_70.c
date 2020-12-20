#include<stdio.h>
int function(char l[50]){
		int i;
		for(i=0;l[i]!='\0';i++){
			
		}
		return i;
}

int main(){
		char l[50];
		int length;
		printf("Enter the string:\n");
		scanf("%49s",&l);
		length=function(l);
		printf("%i",length);

}
