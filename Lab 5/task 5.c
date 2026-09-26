#include <stdio.h>

int main(){
	int score ;
	int authorized ;
	
	printf("Enter Confidence Score (1-100)");
	scanf("%d", &score);
	
	printf("Enter the user type (Enter 1 for authorized or 0 for unauthorized): ");
	scanf("%d", &authorized);
	
	if (score <50 || authorized == 0){
	
		printf("Access Denied");
	}
	else if(score >=80){
		printf("Face recognized ");
		
		printf((authorized == 1 )? "Access Granted" : "Access Denied ");
	
	}
	else if(score >= 50 && score <80){
		printf("Manual Review");
	}
	
}