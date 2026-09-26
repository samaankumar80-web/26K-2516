#include <stdio.h>
#include <math.h>
int main(){
	int View = 1, Train = 2 , Test = 4 , Deploy = 8;
	float accuracy , confidence , Mscore ;
	int size ,Mstatus, role , permission ;
	
	printf("Enter Model Accuracy (0-100): ");
	scanf("%f", &accuracy);
	
	printf("Enter Model Confidence (0-100): ");
	scanf("%f",&confidence);
	
	printf("Enter datasize: ");
	scanf("%d", &size );
	
	printf("Enter user role (type 1 for for Admin , 2 for Developer , 3 for researcher): ");
	scanf("%d", &role);
	
	printf("Enter Model Status (type 1 for Ready, 2 for Testing, 3 for Training): ");
	scanf("%d", &Mstatus);
	
	printf("Enter Permission value (type 1 for View ,2 for Train , 4 for Test, 8 for Deploy): ");
	scanf("%d",&permission);
	
	Mscore = (accuracy + confidence)/2;
	
	char *Name;
	switch(role){
		case 1 : Name = "Admin";break;
		case 2 : Name = "Developer";break;
		case 3 : Name = "Researcher";break;
		default: Name = "Unknown"; break;
		
	}
	char *Sname;
	switch(Mstatus){
		case 1 : Sname = "Ready"; break;
		case 2: Sname = "Testing"; break;
		case 3 : Sname = "Training"; break;
		default : Sname ="Unkown"; break;
	}
	int DReady = (accuracy >=80) && (confidence>=75) && (size>=1000) && (Mstatus == 1 ) && (permission & Deploy);
	
	printf("======== Model Report ========");
	printf("\nUser Role: %s",Name);
	printf("\nModel Status:  %s", Sname);
	printf("\nModel Score: %.3f", Mscore);
	
	printf("\nPermission Held");
	if (permission & View)  printf("\nView");
	if (permission & Train)  printf("\nTrain");
	if (permission & Test)  printf("\nTest");
	if (permission & Deploy)  printf("\nDeploy");
	
	printf("\nDevelopment ready: %s", DReady ? "Yes" : "No");
	printf("\nMemory used : accuracy = %zu , confidence = %zu , size = %zu , role = %zu , Mstatus = %zu , permisson = %zu , Mscore = %zu" , sizeof(accuracy), sizeof(confidence) , sizeof(size), sizeof(role), sizeof(Mstatus), sizeof(permission), sizeof(Mscore));
	
	

	
	
	
}