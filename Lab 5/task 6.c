#include <stdio.h>
int main(){
	int problem , algos ; 
	
	printf("Enter Problem (typr 1 for Classification , 2 for Regression, 3 for Clustering , 4 for Computer vison)");
	scanf("%d", &problem);
	
	switch(problem){
		case 1:
			printf("Select the algorithm (enter 1 for Logistic Regression, 2 for Decision Tree ,3 for KNN): ");
			scanf("%d", &algos);
			
			switch (algos){
				case 1:
					printf("Problem : Classification\n");
					printf("Solution : Logistic Regression");
					break;
				case 2:
					printf("Problem : Classification\n");
					printf("Solution : Decision Tree");
					break;
				case 3:
					printf("Problem : Classification\n");
					printf("Solution : KNN");
					
					
			}
			break;
			
		case 2:
			printf("Select the algorithm(enter 1 for Linear Regression , 2 for Polynomial Regression, SVR): ");
			scanf("%d", &algos);
			
			switch(algos){
				case 1:
					printf("Problem : Regression\n");
					printf("Solution : Linear Regression");
					break;
				case 2 :
					printf("Problem : Regression\n");
					printf("Solution : Polynomial Regression");
					break;
				case 3 :
					printf("Problem : Regression\n");
					printf("Solution : SVR");
					break;
				
			}
			break;
			
		case 3 :
			printf("Select the algorithm(enter 1 for K-means, 2 for Hierarchical Clustering, 3 for DBSCAN): ");
			scanf("%d", &algos);
			
			switch(algos){
				case 1:
					printf("Problem : Clustering\n");
					printf("Solution : K-means");
					break;
				case 2 :
					printf("Problem : Clustering\n");
					printf("Solution : Hierarchical Clustering");
					break;
				case 3 :
					printf("Problem : Clustering\n");
					printf("Solution : DBSCAN");
					break;
				
			}
			break;
		case 4 :
			printf("Select the algorithm (enter 1 for CNN , 2 for YOLO, 3 for R-CNN): ");
			scanf("%d", &algos);
			
			switch(algos){
				case 1:
					printf("Problem : Computer Vison \n");
					printf("Solution : CNN");
					break;
				case 2 :
					printf("Problem : Computer Vison\n");
					printf("Solution : YOLO");
					break;
				case 3 :
					printf("Problem : Computer Vison\n");
					printf("Solution : R-CNN");
					break;
				
			}
			break;
			
			
			}
			
			
}
	
