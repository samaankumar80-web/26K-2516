#include <stdio.h>
#include <string.h>
int main(){
	char feedback[500];
	char updated_feedback[600];
	char *pos;
	
	
	printf("Enter your feedback: ");
	fgets(feedback , sizeof(feedback) , stdin);
	feedback[strcspn(feedback, "\n")] = '\0';

	int x = strlen(feedback);
	
	
	printf("The length of the sentence is %d\n" , x);
	
	if(strstr(feedback, "good") != NULL){
		printf("Positive sentiment found\n.");
	}
	if(strstr(feedback , "bad") != NULL){
		printf("Negative sentiment found.\n");
		pos = strstr(feedback, "bad");
		strcpy(updated_feedback, "");
		
		strncat(updated_feedback, feedback, pos - feedback);
		strcat(updated_feedback, "not good");
		strcat(updated_feedback,pos + 3);
		printf("%s", updated_feedback);
	}
	else {
		printf("No emotional keyword found");
	}

}