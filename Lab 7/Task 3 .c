#include <stdio.h>
int main(){
	char secret_messages[3][100];
	int spaces  , words  ;
	int c ;
	
	for(int i =0 ; i <=2 ; i++){
		secret_messages[i][0] = '\0'; // empty the index 
		
		printf("Enter the Message: ");
		scanf("%99[A-Z ]" , secret_messages[i]);//storing only uppercase letters and spaces 
		
		while ((c = getchar()) != '\n' && c!=EOF);
	
		spaces =0 ;
		words = 0 ;
		
		 
		for(int y = 0 ; secret_messages[i][y] != '\0' ; y++){
			if(secret_messages[i][y] == ' '){
				spaces ++;
			}
			else if(secret_messages[i][y] >='A' && secret_messages[i][y] <='Z'){
				if(y ==0 || secret_messages[i][y-1] == ' ')
				words++;
				
			}
		}
			
		printf("The Mesaage was: %s" , secret_messages[i]);
		printf("\nThe spaces in the message are: %d and the words in the message are: %d\n" , spaces , words);
	}
	

}