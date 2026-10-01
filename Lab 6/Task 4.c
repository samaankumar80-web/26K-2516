#include <stdio.h>
int main(){
	int num , num2 =0,i , length = 0 , checknum;
	printf("Enter the num: ");
	scanf("%d", &num);
	checknum = num;
	if(checknum == 0){
		length ++;
	}
	else{
	
	while(checknum !=0){
		checknum = checknum /10;
		length ++;
	}
	}
	checknum = num;
	for(i = 1; i<=length; i++){
		num2 = (num2 * 10) + (checknum%10);
		checknum = checknum /10;
}
	if (num2 == num){
		printf("it is a palindrome");
	}
	else{
		printf("it is not a palindrome");
	}
}