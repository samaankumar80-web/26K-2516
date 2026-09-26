#include <stdio.h>
#include <stdbool.h>
int main(){
	int Cscore , Rthreshold ;
	bool accept = false ;
	
	printf("Enter Cscore (0-100): ");
	scanf("%d", &Cscore);
	
	printf("Enter Rthreshold (0-100): ");
	scanf("%d", &Rthreshold);
	
	if(Cscore >= 90){
		printf("Very high");
		accept = true;
	}
	else if(Cscore >=75){
		printf("High");
		accept = true;
	}
	else if (Cscore >=50){
		printf("Moderate");
		accept = true;
		
	}
	else {
		printf("Low");
	}
	if (accept && Cscore > Rthreshold){
		printf("\nAccepted ");
	}
	
}