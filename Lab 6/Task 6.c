#include <stdio.h>
int main(){
	int num , count_even =0 , count_odd=0 , x , digit ,length =0;
	
	printf("Enter Electricity meter Reading: ");
	scanf("%d",&num);
	x = num ;
	while (x!= 0){
		x = x / 10;
		length ++ ;
	}
	for (x=1; x <= length ; x++ ){
		digit = num %10;
		if ((digit % 2) == 0)
			count_even ++;
		else 
			count_odd ++;
		num = num /10;	
	}
	printf("Number of odd digits: %d\n", count_odd);
	printf("Number of even digits: %d\n", count_even);

}