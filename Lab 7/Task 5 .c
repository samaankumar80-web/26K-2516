#include <stdio.h>
int main(){
	char sentences [3][100];
	int count_vowels =0 ; 
	
	for (int i = 0 ; i <=2 ; i++){
		sentences[i][0] = '\0';
		printf("Enter the Message: ");
		scanf("%99[^;]" , sentences[i]);
		scanf("%*c");
		
		for (int j = 0 ; sentences[i][j] !='\0' ; j++){
			
			
			char CHAR = sentences[i][j];
			
			if(CHAR == 'a' || CHAR =='A' || CHAR == 'e' || CHAR =='E' || CHAR =='i' || CHAR == 'I' || CHAR == 'o' || CHAR == 'O' || CHAR== 'u' || CHAR == 'U'){
				count_vowels ++;
			}
		}
		
		printf("\nThe message was: %s", sentences[i]);
		printf("\nThe vowels in the sentence are: %d" , count_vowels);
		
	}
	
}