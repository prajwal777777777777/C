#include<stdio.h>
int main(){
	int seconds;
	int hour;
	int min;
	printf("Enter seconds:\n");
	scanf("%i",&seconds);              //input phase
	getchar();

	hour=seconds/3600;                      //int of hour by 3600 
	seconds=seconds%3600;                     //redefining remaing value of second excluding integer of hour
	min=seconds/60;                     //dividing by 60 to calculate min from redefined seconds
	seconds=seconds%60;                  //again redefing but now its gonna be remaing second.
	
	
	printf("Hour:%i\nMinute:%i\nSeconds:%i",hour,min,seconds);

//thank you

}



