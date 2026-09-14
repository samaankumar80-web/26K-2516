#include <stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	
	printf("Enter Num1: ");
	scanf("%d",&num1);
	
	getchar();
	
	printf("Enter Num2: ");
	scanf("%d",&num2);
	
	getchar();
	
	printf("Enter Num3: ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		printf("Num1 is the greatest");
	}
	else if(num2>num1 && num2>num3){
		printf("Num2 is the greatest");
	}
	else if(num3>num1 && num3>num2){
		printf("Num3 is the greatest");
	}
	else if (num1==num2 && num1>num3){
		printf("Num1 and Num2 are same and are largest");
	}
		
	else if(num1==num3 && num1>num2){
		printf("Num1 and Num3 are same and are the largest");
	}
	else if(num2==num3 && num2>num1){
		printf("Num2 and Num3 are the same and are the largest");
	}
	else {
		printf("All three numbers are same");
	}
}