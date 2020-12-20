#include<stdio.h>
#include<ctype.h>
int main(){
	char word[50],lower;                                 //variable declaration of input character and lowercase
	int i=0;                                            	//to loop all character to lower declaration of i
	
	printf("Enter the words:\n");                            //input and storing string in word
	scanf("%49s",&word);

printf("The lower case of given words is ");                              
	while(word[i]){                                                           //looping all character in word starting with 0 and ending at ending charcater
	
	lower=word[i];                                                             //loop
	printf("%c",tolower(lower));
	i++;                                                                       //will end when i execeds the character of word.


	}















}
