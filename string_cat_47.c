#include<stdio.h>
#include<string.h>
int main(){
	char first[50],second[50];
	printf("Enter the first string:\n");
	scanf("%s",first);
	
	printf("Enter the second string:\n");
	scanf(" %s",second);
	
	strcat(first," ");
	
	strcat(first,second);

printf("%s",first);

























}
