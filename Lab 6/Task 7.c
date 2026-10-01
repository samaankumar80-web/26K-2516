#include <stdio.h>
int main(){
	int number , line, x , spaces , gap , i ,j;
	
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	int T_rows = (2*number)-1;
	
	for(line= 1; line <= T_rows ; line++){
		x = (line <= number) ? line : (2*number-line);
		
		spaces = number -x;
		
		for(i = 0 ; i<spaces ; i++)
			printf(" ");
		
		printf("*");
		if (x > 1){
			int gap = (2*x) - 3;
			for(j= 0; j <gap; j++)
				printf(" ");
			printf("*");
		}
		
		printf("\n");
		
		
	}
}