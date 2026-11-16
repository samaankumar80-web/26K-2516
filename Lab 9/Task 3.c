#include <stdio.h>
int main(){
	int image[3][3];
	int (*ptr)[3] = image;
	int i , j ;
	
	printf("Enter values for the 3 x 3 imag (9 pixels): \n");
	for(i = 0 ; i <3; i++){
		for(j = 0 ; j <3; j++){
			printf("Pixel [%d][%d]: " , i , j);
			scanf("%d", *(ptr + i) + j);
		}//end inner for		
	}//end outer for


	printf("\nOriginal Image:\n");
	for(i = 0; i <3; i ++){
		for(j =0; j <3; j++){
			printf("%4d ", *(*(ptr + i) + j));
		}//end inner for 
	}//end outer for 
	

	
	for(i = 0; i <3; i++){
		for(j = 0; j <3; j ++){
			*(*(ptr+i) +j) = *(*(ptr +i) + j) * 2 ;		
		}//end innner for 
	}//end outer for 


	printf("\nBrghtened Image (pixels x 2):\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%4d ",*(*(ptr + i) +j));
		}//end inner for
		printf("\n");
	}//end outer for
	
	return 0;
}



