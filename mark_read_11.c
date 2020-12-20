#include<stdio.h>
int main(){
	int first_marks;
	int second_marks;
	int third_marks;
	int fourth_marks;
	int fifth_marks;
	printf("Enter the mathmatics marks:\n");
	scanf("%i",&first_marks);
	getchar();


	printf("Enter the science marks:\n");
	scanf("%i",&second_marks);
	getchar();

	printf("Enter the social marks:\n");
	scanf("%i",&third_marks);
	getchar();


	printf("Enter the english  marks:\n");
	scanf("%i",&fourth_marks);
	getchar();


	printf("Enter the nepali marks:\n");
	scanf("%i",&fifth_marks);
	getchar();

	int total=first_marks+second_marks+third_marks+fourth_marks+fifth_marks;
	float total_percantage=(float)total*100/500;
	printf("Total Marks:%i\n",total);
	printf("Total Percentage:%f\n",total_percantage);

	printf("--------------------------------------Division---------------------------------\n");

	if(total_percantage>80){
			printf("Division:Distinction\n");
			printf("Excellent\n");
	}
	else if(total_percantage>60 && total_percantage<80){
		printf("Division:First Division\n");
		printf("Good\n");

	}

	else if(total_percantage>50 && total_percantage<60){
		printf("Division:Second Division\n");
		printf("average\n");
	}

	else if(total_percantage>40 && total_percantage<50){
		printf("Division:Third Division\n");
		printf("need more work\n");

}
else{
	printf("Failed!!!\n");
	printf("Need to focus on study!!!\n");

}

}
