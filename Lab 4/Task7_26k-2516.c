#include <stdio.h>
int main(){
	float data_used ;
	float price;
	float discount;
	
	printf("Enter Data used: ");
	scanf("%f", &data_used);
	getchar();
	
	printf("Enter Price per GB: ");
	scanf("%f", &price);
	getchar();
	
	float Cost = (data_used * price);
	
	if(data_used < 50){
		discount = 0.0 ;
	}	
	else if(data_used >= 50 && data_used <100){
		discount = (5.0/100)*Cost;		
	} 
	else if(data_used >=100 && data_used <200){
		discount = (10.0/100)*Cost;
	}
	else{
		discount = (15.0/100) * Cost;
	}
	
	float Discounted_Price = Cost - discount;
	
	printf("The cost of data used is  %.2f", Cost);
	printf("\nThe discount is %.2f", discount);
	printf("\nThe price after discount is %.2f", Discounted_Price);
}
