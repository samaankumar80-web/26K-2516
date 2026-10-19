#include <stdio.h>
int main(){
	float sensor_data[3][4];
	
	for(int row = 0 ; row <=2 ; row ++){
		for(int col = 0 ; col <=3 ; col ++){
			printf("Enter the value in row %d ,column %d: ",row+1,col+1);
			scanf("%f", &sensor_data[row][col]);
		}
	}
	
	int defected_col = -1 ;
	while (defected_col <0 || defected_col>3 ){
		printf("Enter the index of the defected col(0-3): ");
		scanf("%d" , &defected_col);
	}
	
	for(int r = 0 ; r <=2; r++){
		for(int c= defected_col; c <=2; c++){
			sensor_data[r][c] = sensor_data[r][c+1];
		}
	}
	
	printf("\nUpdated Matrix\n");
	for(int y= 0 ; y <=2 ; y++){
		for(int x = 0 ; x<=2;x++){
			printf("%.2f |" , sensor_data[y][x] );
		}
		printf("\n------------------------\n");
	}
}