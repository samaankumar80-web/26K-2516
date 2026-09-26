#include <stdio.h>
#include <string.h>
int main(){
	char category[100] ;
	int options ;
	
	printf("Enter category (Greeting or Study or Weather or Help): ");
	fgets(category , sizeof(category), stdin);
	
	category[strcspn(category , "\n")] = 0 ;
	
	if(strcmp(category , "Greeting") == 0 || strcmp(category , "greeting") == 0){
		printf("Select options (enter 1 for Hello, 2 for How are you, 3 for Goodbye): ");
		scanf("%d", &options);
		
		switch(options){
			case 1:
				printf("Hello");
				break;
			case 2 :
				printf("How are You");
				break;
			case 3:
				printf("Goodbye");
				break;
			
	}

	}
	else if (strcmp(category, "Study")==0 || strcmp(category, "study")==0){
		printf("Select options (enter 1 for Programming , 2 for Mathematics , 3 for AI): ");
		scanf("%d", &options);
		
		switch (options){
			case 1 :
				printf("Programming");
				break;
			case 2 :
				printf("Mathematics");
				break ;
			case 3 :
				printf("AI");
				break ;
		}
	
	}
	else if(strcmp(category , "Weather") == 0 || strcmp(category , "weather") == 0){
		printf("Select options (enter 1 for Today , 2 for Tomorrow , 3 for forecast): ");
		scanf("%d", &options);
		
		switch(options){
			case 1 :
				printf("Today");
				break;
			case 2 :
				printf("Tomorrow");
				break;
			case 3 :
				printf("Forecast");
				break;
		}
	}
	else if (strcmp(category, "Help")==0 || strcmp(category, "help")==0){
		printf("Select options (enter 1 for About Chatbot , 2 for Commands , 3 for Exit)");
		scanf("%d",&options);
		
		switch (options){
			case 1 :
				printf("About Chatbot");
				break;
			case 2 :
				printf("Commands");
				break;
			case 3 :
				printf("Exit");
				break;	
						
		}
	}
	else{
		printf("invalid input");
	}
		
	
}
	
