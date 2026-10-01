#include <stdio.h>
int main(){
	char str_arr[100];
	char reverse[100];
	
	printf("Enter the word to Store: ");
	fgets(str_arr , sizeof(str_arr), stdin);
	
	printf("%s",str_arr );

	int length =0 , i =0 ;
	while (str_arr[i] != '\0'&& str_arr[i] != '\n'){
		length++;
		i ++;
	}
	printf("\nThe length of the word you entered is: %d", length);	

	//reversing the word
	int j=0;
	for(i -=1 ; i>= 0; i--){
		reverse[j] = str_arr[i] ;
		j++;
	}
	printf("\nThe reverse of the word is: %s", reverse);
	
	//Palindrome check
	j-=1 ;
	i = 0 ;
	int is_palindrome=1;
	while( str_arr[i] != '\0' && str_arr[i] !='\n'){
		if(str_arr[j] != str_arr[i]){
		
			is_palindrome = 0;
		}		
		i++;
		j--;
	}
	if(is_palindrome)
		printf("\nThe word you wrote is a palindrome");
	else 
		printf("\nThe word you wrote is not a palindrome");
	
	//counting consonants and vowels
	int count_vowels =0 , count_consonants=0;
	i = 0;  
	while(str_arr[i] != '\0' && str_arr[i] !='\n'){
		switch(str_arr[i]){
			case 'a':
			case 'A':
				count_vowels ++;
				break;
			case 'e':
			case 'E':
				count_vowels ++;
				break;
			case 'i':
			case 'I':
				count_vowels ++;
				break;
			case 'o':
			case 'O':
				count_vowels ++;
				break;
			case 'u':
			case 'U':
				count_vowels ++;
				break ;
			default:
				count_consonants ++;
		}
		i++;
	}
		printf("\nNumber of vowels in your word are: %d" , count_vowels);
		printf("\nNumber of consonants in your word are: %d" , count_consonants);

	
	
	
}