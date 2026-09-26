#include <stdio.h>
#include <string.h>
int main(){
	int age , income , cscore ;
	char loan[100];
	
	printf("Enter the age: ");
	scanf("%d", &age);
	getchar(); 
	
	printf("Enter the Income: ");
	scanf("%d", &income);
	getchar();
	
	
	printf("Enter the Credit Score: ");
	scanf("%d", &cscore);
	getchar();
	
	
	
	printf("Do you have a current loan or not (type Existing loan or No Existing loan):");
	fgets(loan, sizeof(loan), stdin);
	loan[strcspn(loan, "\n")] = '\0';

	if(age>= 21 ){
		if(income >= 100000 && cscore >= 750 && strcmp(loan, "No Existing Loan" ) == 0 ){
			printf("High Approval Chance");
		}
		else if(income >= 75000 && cscore >= 650 && strcmp(loan,"Existing Loan")==0){
			printf("Manual Review");
		}
		else if(income >= 50000 && cscore >= 600){
			printf("Possibly Eligible ");
		}
	}
	else {
	
		printf("Rejected");
	}
}
	
