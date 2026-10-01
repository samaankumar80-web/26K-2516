#include <stdio.h>
int main(){
	int sum, pass ;
	
	printf("Enter your password: ");
	scanf("%d",&pass);
	
	while( pass!=0 ){
		sum =sum + (pass %10);
		pass = pass / 10;
	}
	
	if (sum >10)
		printf("Your Password in strong");	
	else 
		printf("Your Password is weak");
		
}