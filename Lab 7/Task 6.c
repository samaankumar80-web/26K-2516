#include <stdio.h>
int main(){
	int shifts[4][3];
	int target ; 
	
	printf("Enter the initial values of Matrix: ");
	for(int i = 0 ; i<=2 ; i++){
		for(int j =0 ; j<=2; j++){
			printf("\nWorkstation %d, shift %d: ",i,j+1);
			scanf("%d" , &shifts[i][j]);
		}
	}
	
	int target_row = -1;
	while (target_row <0 || target_row>2){
		printf("\nEnter the index of row to inert the data(0-2): ");
		scanf("%d", &target_row);
		
	}
	
	for (int y = 3; y > target_row; y-- ){
		for(int x = 0 ; x <=2; x++){
			shifts[y][x] = shifts[y-1][x];
		}
	}
	for(int k =0 ; k<=2; k++){
		printf("\nEnter new row value %d:", k+1);
		scanf("%d" ,&shifts[target_row][k]);
	}
	
	printf("\nUpdated Matrix\n");
	for(int a = 0 ; a <=3; a++){
		for(int b = 0; b<=2;b++){
			printf("%d |" , shifts[a][b]);
		}
		printf("\n---------------------------\n");
	}
}