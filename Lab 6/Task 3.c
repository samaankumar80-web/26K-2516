#include <stdio.h>
int main(){
	int T_absent  =0 ,T_present =0   , index , attend ;
	
	for (index = 1 ; index <=15; index++){
		printf("Enter student's attendence (Type 1 for present and 0 for absent)");
		scanf("%d",&attend);
		
		if(attend == 1)
			T_present ++;
		else 
			T_absent ++;
	}
	
	printf("%d\n", T_present);
	printf("%d", T_absent); 
	
}