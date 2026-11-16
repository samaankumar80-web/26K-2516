#include <stdio.h>
float calculatediscount(char memberStatus , float amount){
	float discount ;
	switch(memberStatus){
		case 'P':
			discount = amount * 0.2f;
			
			break;
		case 'G':
			discount = amount * 0.1f;
			
			break;
		
		default:
			discount = amount * 0.05f;
			
			break;
	}// end switch
	
	if(amount> 10000){
		discount += amount * 0.02f;
	}// end if
	
	return discount;
}//end function calculatediscount 


float calculateFinalBill(float d_amount){
	int shipping =0 ;
	if(d_amount <= 5000 )
		shipping= 300;
	
	d_amount += d_amount * 0.15f;
	d_amount += (float)(shipping);
	return d_amount;
}// end function calculateFinalBill



int main(){
	float original_amount ; 
	char MemberStatus; 
	
	
	printf("Enter the total original amount: ");
	scanf("%f" ,&original_amount);
	getchar();
	printf("Enter the member status of the customers: ");
	scanf("%c" , &MemberStatus);
	
	
	float discount = calculatediscount(MemberStatus , original_amount);
	float DAmount = original_amount - discount;
	float finalBill = calculateFinalBill(DAmount);
	
	
	
	printf("\n====== BILL SUMMARY ======\n");
	printf("Original Amount : %.2f" , original_amount);
	printf("\nDiscnount : %.2f" , discount);
	printf("\nDiscounted Amount : %.2f"  , DAmount);
	printf("\nFinal Payable Amount : %.2f" , finalBill);	
	
}