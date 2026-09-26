#include <stdio.h>
int main(){
	int View = 1;
	int Train = 2 ;
	int Test = 4 ;
	int Deploy = 8 ; 
	int permission ;
	
	
	printf("Enter Permission: ");
	scanf("%d", &permission);
	
	if (permission & View){
		printf("View\n");
	}	
	if (permission & Train){
		printf("Train\n");
	}
	if (permission & Test){
		printf("Test\n");
	}
	if (permission & Deploy){
		printf("Deploy");
	}
	
	if 	((permission & Train) && (permission & Deploy)){
		printf("\nThis user can both Train and deploy models.");
	}
	else{
		printf("\nThis user does not have both Train and Deploy permission.");
	}
	
}