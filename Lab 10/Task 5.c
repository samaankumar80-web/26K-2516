#include <stdio.h>
int main(){
	FILE *ptr;
	int roll;
	char name[50];
	float marks;
	
	
	ptr = fopen("marks.txt" , "r");
	
	if(ptr == NULL){
		printf("File not found");
		return 1;
	}
	
	printf("\n%-10s %-20s %8s\n" , "Roll No" , "Name", "Marks");
	printf("-------------------------------------------------\n");
	
	int result;
	while(( result = fscanf(ptr, "%d,%49[^,],%f" , &roll, name , &marks)) != EOF){
		if(result != 3){
			break;
		}
		printf("%-10d %-20s %8.2f\n" , roll , name , marks);	
	}
	
	fclose(ptr);
	return 0;
}