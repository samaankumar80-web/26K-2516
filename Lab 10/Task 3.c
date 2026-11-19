#include <stdio.h>
#include <string.h>
int main(){
	char email[100];
	char domain[100];
	printf("Enter the empolyee email: \n");
	fgets(email, sizeof(email), stdin);
	
	char *ptr = strchr(email, '@');
	
	if(ptr != NULL){
		strcpy(domain, "");
		strcat(domain, ptr +1);
		printf("The domain name is: %s" , domain);
	}
	else{
		printf("Invalid email format");
	}
	
	
}