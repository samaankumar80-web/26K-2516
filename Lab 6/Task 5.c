#include <stdio.h>
int main(){
	int num, i, y, j, numerator =1 , dBracket1=1 ;
	float Ans = 0 ;
	
	printf("Enter the Number to find Catalan number: ");
	scanf("%d",&num);
	
	if (num == 0){
		Ans = 1;
	}
	else {
		numerator = num *2;
		dBracket1 = num +1;
	
	for (i = numerator - 1 ; i >=1 ; i--){
		numerator = numerator * i;
	}
	for (y = dBracket1 - 1 ; y >= 1 ; y--){
		dBracket1 = dBracket1 * y;
	}
	for (j = num -1 ; j >=1 ; j--){
		num = num* j;
	}

	Ans = numerator /(dBracket1*num);
	printf("The Catalan Number is: %.2f", Ans);
	
}
}