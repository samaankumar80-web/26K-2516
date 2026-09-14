#include <stdio.h>
int main(){
	int total_records;
	int missing_records;
	int duplicate_records;
	
	
	printf("Enter Total number of records: ");
	scanf("%d",&total_records);
	getchar();
	
	printf("Enter Total number of missing records: ");
	scanf("%d", &missing_records);
	getchar();
	
	printf("Enter Total number of duplicate_records: ");
	scanf("%d", &duplicate_records);
	

	if(total_records <=0){
		printf("Invalid Dataset");
	}
	else {
		float MissingP = ((float)missing_records/total_records)*100;
		float DuplicateP = ((float)duplicate_records/total_records)*100;

		if(MissingP >30){
		printf("Poor Quality Dataset");
		
	}
		else if(DuplicateP >20){
			printf("Dataset Requires Cleaning");
	}
		else {
			printf("Dataset Ready for Training");
	}
}
}	
