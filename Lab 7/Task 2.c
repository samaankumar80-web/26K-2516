#include <stdio.h>
int main(){
	char log[3][30] ; 
	int count = 0 ;
	
	for (int i = 0 ; i <=2 ; i++){
		printf("Enter a CSV log entry: ");//prompting the user to enter the entry
		scanf(" %29[^,],%29[^,],%29[^\n]" , log[0], log[1] , log[2]);//storing the value in the array 
		
		
		for(int y = 0; y <=2 ; y++){
			for(int x = 0 ; log[y][x] != '\0'; x++){
				if(log[y][x] >= 'A' && log[y][x] <= 'Z'){
					count ++;
				}				
			}
		}
		printf("The count Uppercase letters in the %d CSV log entry is: %d\n" ,i+1, count);
	}
	
}