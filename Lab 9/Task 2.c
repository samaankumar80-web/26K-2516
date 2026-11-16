#include  <stdio.h>
void withdraw(float *acc_bal_ptr, float w_amount){
	if(w_amount <= *acc_bal_ptr){
		printf("Transaction successfull.");
	}//end if 
	else {
		printf("Transaction Declined: Insufficient Balance");
	}//end else 
	
}// end function withdraw

void deposit(float *acc_bal_ptr,float  d_amount){
	*acc_bal_ptr += d_amount;
	printf("Amount added to your account.\n");
	printf("Updated Balance: %.2f" , *acc_bal_ptr);
}//end function deposit


int main(){
	int choice;
	float amount , curr_bal = 10000;
	while(choice != 1 && choice != 2){
	
	printf("Enter the choice (1 for credit , 2 for debit): ");
	scanf("%d" , &choice);
	
	switch(choice){
		case 1 :
			printf("Enter the amount to deposit: ");
			scanf("%f" , &amount);
			deposit(&curr_bal , amount);
			break;
		case 2:
			printf("Enter the amount to credit: ");
			scanf("%f", &amount);
			withdraw(&curr_bal, amount);
			break;
	}//end switch
	
	}//end while
	return 0 ;
}//end main 
