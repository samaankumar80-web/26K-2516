#include <stdio.h>
int main(){
	int role =0  ;
	int status = -1;
	int security ; 
	while(role!= 1 && role != 2 && role != 3){
		printf("Enter User role (Type 1 for Admin ,2 for Researcher ,3 for Student)");
		scanf("%d", &role);
	}
	
	getchar();
	while (status!= 1 && status != 0){
			printf("Enter the Account Status (Type 1 for Active , 0 for Inactive)");
		scanf("%d", &status);
	}

	getchar();
	
	printf("Enter the security level");
	scanf("%d", &security);
	
	if(status == 0 ){
		printf("Access Denied");
	}
	else{
		if(role == 1){
			if(security>=3){
				printf("Admin Access Granted");
			}
			else{
				printf("Access Denied");
				
			}
		}
		else if (role == 2){
			if(security >=2 ){
				printf("Researcher Access Granted");
			}
			else{
				printf("Access Denied");
			}
		}	
		else {
			if(security >= 1){
				printf("Student Access Granted");
			}
			else {
				printf("Access Denied");
			}
		}
	}
}