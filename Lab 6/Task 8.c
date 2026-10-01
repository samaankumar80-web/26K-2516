#include <stdio.h>
int main(){
	int my_arr [10];
	int i, number ;
	for (i = 0; i <= 7; i++){
		printf("\nEnter the number: ") ;
		scanf("%d", &my_arr[i]);
	}
	printf("my_arr contents: ");

	for (i=0 ; i<=7; i++){
		printf(" %d", my_arr[i]);
	}
	
	//finding largest and smallest
	int largest = my_arr[0] ,smallest = my_arr[0];
	for(i=1 ;i<=7;i++){
		if (my_arr[i]> largest)
			largest = my_arr[i];
		else if (my_arr[i]<smallest)
			smallest = my_arr[i];
	}
	printf("\nThe largest number in my_arr is: %d", largest);
	printf("\nThe smallest number in my_arr is: %d", smallest);
	
	//searching in array 
	int num_to_search , flag = 0;
	printf("\nEnter the number to search: ");
	scanf("%d", &num_to_search);
	
	for(i = 0 ;i<=7; i++ ) {
		if(my_arr[i] == num_to_search){
			flag = 1;
			printf("\nThe number entered was found at index: %d", i);
			   
		}
			
	}
	if (flag ==0)
		printf("\nThe number you entered was not found in the array");

	
	// inserting a number at a specific position 
	int insert_num, pos ;
	
	printf("\nEnter the num to insert and its positon: ");
	scanf("%d %d",&insert_num , &pos);
	
	for(i = 7 ; i>=pos ; i-- ){
		my_arr[i+1] = my_arr[i];
		
	}
	my_arr[pos] = insert_num;
	
	//deleting the number for specific address
	
	int del_pos ;
	
	printf("\nEnter the index of the element you want to delete: ");
	scanf("%d",&del_pos);
	if(del_pos == 8)
		my_arr[8] =0;
	else{
	
		for(i=del_pos ; i < 8; i++){
			my_arr[i] = my_arr[i+1];
	}
		my_arr[8] = 0;
	}
	printf("\nFinal Array content's: ");
	for(i=0;i <=7; i++){
		printf(" %d", my_arr[i]);
	}
	
	
 

}