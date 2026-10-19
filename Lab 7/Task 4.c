#include <stdio.h>
int main(){
	char word_grid[3][100];
	int c ;
	
	int maxlen =0;
	int MRow =-1  , MCol = -1 ;
	char longest[100] = "";
	
	
	for (int i = 0 ; i<=2 ; i++){
		word_grid[i][0] = '\0';
		
		printf("Enter the row line: ");
		scanf("%99[^\n]" , word_grid[i]);
		
		while ((c = getchar()) !='\n' && c!=EOF);
		
		
	}
	for(int j =0 ; j<=2 ; j++){
		int col =0 , len =0 , start =0 ; 
		
		for (int y = 0; word_grid[j][y] != '\0'; y++){
			if(word_grid[j][y] != ' '){
				if(len ==0)
					start = y ;
				len ++;
			
			}
			else if(len >0){
				if(len > maxlen){
					maxlen = len ;
					MRow = j ;
					MCol = col;
					
					for(int x = 0 ; x<=len -1 ; x++){
						longest[x] = word_grid[j][start + x];
					
					}
					longest[len]= '\0';
				}
				col ++;
				len = 0 ;
				
				}	
		}
			if(len >0){
				if(len > maxlen){
					maxlen = len ;
					MRow = j ;
					MCol = col;
					
					for(int x=0 ; x<=len -1 ; x++){
						longest[x] = word_grid[j][start + x];
					
					}
					longest[len]= '\0';
				}
			}
			
	}
	if(MRow == -1)
		printf("\nNo Words entered.\n");
	else {
		printf("\nLongest word in the grid: %s" , longest);
		printf("\nThe length of the word is: %d", maxlen);
		printf("\nThe position of this word in the grid is at row %d and col %d" , MRow , MCol );
	}	
}