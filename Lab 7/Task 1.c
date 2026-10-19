#include <stdio.h>
int main(){
	char student_names[3][50];
	int marks[3][3], len =0;
	float avg;
	
	for (int i = 0 ; i <=2 ; i ++){
		printf("Enter Full Name: ");
		scanf(" %49[^\n]" , student_names[i]);
		
		int sum =0;
		for(int j = 0 ; j<=2 ; j++){
			printf("Enter the subjects: ");
			scanf("%d" , &marks[i][j]);
			sum += marks[i][j];
			
		}
		
		avg = sum /3.0;
		printf("%-30s\nAverage: %.2f\n", student_names[i], avg);

		
	
	}
}