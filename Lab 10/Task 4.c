#include <stdio.h>
#include <stdlib.h>
int main(){
	int Account_Number;
	float Withdrawal_Amount;
	char Customer_Name[100];
	FILE *fptr;
	
	printf("Enter the customer name: ");
	fgets(Customer_Name,sizeof(Customer_Name), stdin);
	Customer_Name[strcspn(Customer_Name, "\n")] = '\0';
	printf("\n");
	
	printf("Enter the Account number: ");
	scanf("%d", &Account_Number);
	printf("\n");

	printf("Enter the withdrawal amount: ");
	scanf("%f", &Withdrawal_Amount);
	printf("\n");
	fptr = fopen("bank_log.txt", "a");
	
	if(fptr == NULL){
		printf("Error: Could not open the file\n");
		return 1;
	}
	
	
	fprintf(fptr , "Name: %s | Account: %d | Withdrawal: %.2f\n" , Customer_Name, Account_Number, Withdrawal_Amount);
	
	fclose(fptr);
	printf("Transaction logged successfully.\n");
	
	
	return 0;

} 