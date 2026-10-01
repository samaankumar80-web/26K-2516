#include <stdio.h>
int main(){
	int num , digit ;
	
	printf("Enter your Ticket Number: ");
	scanf("%d", &num);
	
	while (num !=0){
		digit = num % 10;
		printf("%d",digit);
		num = num /10;
	}	
}
