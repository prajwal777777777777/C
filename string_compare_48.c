#include<stdio.h>
#include<string.h>
int main(){
	char first[50],second[50];
	printf("Enter the first string:\n");
	scanf("%49s",&first);
	printf("Enter the second string:\n");
	scanf("%49s",&second);

	int result=strcmp(first,second);
	printf("strcmp(first,second):%d",result);















}
