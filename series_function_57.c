#include<stdio.h>
int function(int n){
		int diffrence=4,a=1,final;
		final=a+(n-1)*diffrence;
		while(a<=final){
				printf("%i\t",a);
				a+=4;
		}
}
int main(){
		int n=10;
		function(n);

}
