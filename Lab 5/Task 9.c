#include <stdio.h>
#include <math.h>
int main(){
	int choice ;

	printf("1 = Square Root\n");
	printf("2 = Power\n");
	printf("3 = Absolute Value\n");
	printf("4 = Floor\n");
	printf("5 = Ceiling");
	
	printf("Choose from 1 - 5");
	scanf("%d", &choice);
	
	switch (choice){
		case 1 :{
			
			float Num, Sqrt;
			printf("Enter Num to apply square root: ");
			scanf("%f" , &Num);
			if(Num>=0){
				Sqrt = sqrt(Num);
				printf("\n%f",Sqrt);
			}
			else {
				printf("\nInavlid input");
			}
			break ;
		}
		case 2 :{
		
			float Base , expo , Result;
			printf("Enter Base: ");
			scanf("%f", &Base);
		
			printf("Enter Exponent: ");
			scanf("%f", &expo);
			Result = pow(Base , expo);
			printf("\n%f", Result);
			break;
		}
		case 3 :{
			
			float num , ans;
			printf("Enter Number");
			scanf("%f", &num);
			
			ans = fabs(num);
			printf("\n%f",ans);
			break ;
		}
		case 4:{
			
			float num1 , result;
			printf("Enter the number: ");
			scanf("%f", &num1);
			
			result = floor(num1);
			printf("%f",result);
			break;
		}
		case 5:{
		
			float NUM , Ans ; 
			printf("Enter the number: ");
			scanf("%f", &NUM);
			
			Ans = ceil(NUM);
			printf("%f",Ans);
			break;
		}
				
		default:
			printf("Invalid input");
		

	
}
}