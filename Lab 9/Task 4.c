#include <stdio.h>
int add(int a , int b){
	int addition = a + b;
	return addition;
}//end user define function add

int multiply(int a, int b){
	int multiplication = a * b;
	return multiplication;
}//end user define function multiply


int findMax(int a, int b){
	if(a > b)
		return a;
	else 
		return b;
}//end user define function  findMax

int compute(int a, int b, int (*operation)(int ,int)){
	return operation(a ,b);
}//end user define funtion findMax

int main(){
	int x, y;
	
	
	printf("Enter the first integer: ");
	scanf("%d" , &x);
	
	printf("Enter the second integer: ");
	scanf("%d" , &y);
	
	
	int sum		= compute(x,y, add);
	int product = compute(x,y, multiply);
	int maximum = compute(x ,y, findMax);
	
	
	printf("\nSum	= %d\n", sum);
	printf("Product = %d\n" , product);
	printf("Maximum = %d\n" , maximum);
	
		
	return 0;
}