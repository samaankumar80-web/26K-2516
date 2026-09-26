#include <stdio.h>
int main(){
	int category ,subcategory ;	
	printf("Enter category ( 1 for Animal or 2 for Vehicle or 3 for Food or  4 for Human): ");
	scanf("%d", &category );
	
	switch (category){
		case 1 :
			printf("Enter subcategory (1 for cat , 2 for Dog , 3 for bird): ");
			scanf("%d", &subcategory);
			
			switch (subcategory){
				case 1 :
					printf("You Selected category Animal and subcategory Cat");
					break ;
				case 2 :
					printf("You selected category Animal and subcategory Dog");
					break;
				case 3:
					printf("You selected category Animal and subcategory Bird");
					break;
			
			}
			break;
		case 2:
			printf("Enter subcategory (1 for car , 2 for bus , 3 for bike): ");
			scanf("%d", &subcategory);
			
			switch(subcategory){
				case 1:
					printf("You selected category Vehicle and subcategory Car");
					break;
				case 2:
					printf("You selected category Vehicle and subcategory Bus");
					break;
				case 3:
					printf("You selected category Vehicle and subcategory Bike");
					break;
			}
			break;
		case 3:
			printf("Enter subcategory (1 for pizza , 2 for burger , 3 for biryani): ");
			scanf("%d", &subcategory);
			
			switch(subcategory){
				case 1:
					printf("You selected category Food and subcategory Pizza");
					break;
				case 2:
					printf("You selected category Food and subcategory Burger");
					break;
				case 3:
					printf("You selected category Food and subcategory Biryani");
					break;
			}
			break;
		case 4:
			printf("Enter subcategory (1 for male , 2 for female , 3 for child): ");
			scanf("%d", &subcategory);
			
			switch(subcategory){
				case 1:
					printf("You selected category Human and subcategory Male");
					break;
				case 2:
					printf("You selected category Human and subcategory Female");
					break;
				case 3:
					printf("You selected category Human and subcategory Child");
					break;
			}
			break;
			
				
	}

}
