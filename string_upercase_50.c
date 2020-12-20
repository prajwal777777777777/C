#include<stdio.h>
#include<ctype.h>

int main(){

	char word[50],upper;                                     //intialization of character and words
	int i=0;                         


	printf("Enter the words:\n");                                  //printing input and storing it in word
	scanf("%49s",&word);

printf("The upper case of given words is ");

	while(word[i]){                                                  //looping the every character of word

	upper=word[i];                                                      //storing the string of words to upper  


	printf("%c",toupper(upper));                                    //converting the lowercase to uppercase one word at time due to loop


	i++;                                                                     //loop will end when i will pass the last character of upper






	}
	printf(".");
	return 0;                                                        ///>























}
