#include <stdio.h>
#include <stdbool.h>
int main(){
	int math , AI , Programing ;
	float attendence , avg ;
	bool valid = false;
	
	printf ("Enter obtained marks in maths: ");
	scanf("%d", &math);
	getchar();
	
	printf ("Enter obtained marks in Ai: ");
	scanf("%d", &AI);
	getchar();
	
	printf ("Enter obtained marks in Programing: ");
	scanf("%d", &Programing);
	getchar();	
		
	printf ("Enter obtained marks in Attendence: ");
	scanf("%d", &attendence);
	
	if(math >= 50){
		if(Programing>= 50 ){
			if(AI >= 50){
				if(attendence >= 75){
					valid = true;
				}
			}
		}
	}
	if(valid){
		avg = (math + Programing + AI)/3;
		if(avg >= 80){
			printf("Excellent");
		}
		else if(avg >= 70){
			printf("Very Good");
		}
		else if(avg >= 60){
			printf("Good");
		}
		else if(avg >= 50){
			printf("Satisfactory");
		}
		else{
			printf("Poor");
		}
	}
	else {
		printf("Student is not Eligible");
	}
		
}