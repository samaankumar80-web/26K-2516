#include <stdio.h>
int main(){
	int obstacle = -1 ;
	int person = -1 ;
	int battery = -1 ;
	
	while(obstacle !=1 && obstacle !=0){
		printf("Enter obstacle detection (type 1 for Dectected ,0 for Not Dectected ): ");
		scanf("%d", &obstacle );
	}
	
	while(battery <0 || battery >100){
		printf("Enter battery percentage: ");
		scanf("%d", &battery);	
	}
	if(obstacle == 1 ){
		while(person != 1 && person != 0){
			printf("Enter person detected or not (type 1 for person, 0 for not a person): ");
			scanf("%d", &person);
		}
		if(person == 1){
			printf("Emergency Stop");
		}
		else{
			printf("Change Direction");
		}
	}
	else{     
		if(battery< 20){
			printf("Return to charging station");
		} 
		else{
			printf("Continue Moving");
		}
	}
}