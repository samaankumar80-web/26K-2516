#include <stdio.h>
int main(){
	float Model_Accuracy;
	float Prediction;
	int Status = -1  ;
	
	printf("Enter Accuracy: ");
	scanf("%f",&Model_Accuracy);
	getchar();
	
	printf("Enter Predictrion latency in miliseconds: ");
	scanf("%f",&Prediction);
	getchar(); 
	while(Status != 0 && Status != 1){
		printf("Enter Approval status (enter 1 of APPROVED and 0 for NOT APPROVED): ");
		scanf("%d", &Status);
		getchar();
	}
	
	if(Model_Accuracy < 90 && Prediction >100){
		printf("Accuracy is low and Latency time is too much ");
	}
	else if(Model_Accuracy <90 && Status== 0 ){
		printf("Accuracy is low and Model is not Approved ");
	}
	else if(Status == 0 && Prediction >100 ){
		printf("Model is not approved and Latency is too high ");
	}
	else if(Model_Accuracy < 90 && Prediction > 100 && Status==0){
		printf("All conditions do not meet the requirement");		
	}
	else if(Model_Accuracy < 90){
		printf("Accuracy too low");
	}	
	else if(Prediction >100){
		printf("Latency is too High");
	}
	else if(Status ==0){
		printf("Model not approved");
		
	}
	else {
		printf("Ai model can be deployed");
	}

	
}