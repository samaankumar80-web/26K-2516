#include <stdio.h>
void printSensorData(void *data, char type){
	if(type == 'f'){
		float *temp = (float *)data;
		printf("Temperature: %.1f C\n" , *temp);
	}//end if
	else if(type == 'i'){
		int *motion = (int *)data;
		if(*motion == 1)
			printf("Motion Detected\n");
		else if(*motion == 0)
			printf("No Motion\n");
		else 
			printf("Invalid motion value\n");
	}//end else 
	
	else if(type == 'c'){
		char *door = (char *)data;
		if(*door == 'O')
			printf("Door Open\n");
		else if(*door =='C')
			printf("Door Closed\n");
		else 
			printf("Invalid door value\n");
	}// end else if
	
	else {
		printf("Unknown data type\n");
	}//end else
}//end function printSensorData


int main(){
	float temp = 26.5;
	int motion =1;
	char doorlock ='C';
	
	printf("==== START HOME SENSOR READINGS ====\n");
	printSensorData(&temp, 'f');
	printSensorData(&motion, 'i');
	printSensorData(&doorlock, 'c');
	
	return 0;
}// end main