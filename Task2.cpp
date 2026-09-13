#include<stdio.h>

int main(){
	float entry_test_score,fsc_percentage,Total_Score;
	printf("Entry test score, Fsc Percentage: \n");
	scanf("%f %f",&entry_test_score,& fsc_percentage);
	
		Total_Score=(entry_test_score* 0.5)+(fsc_percentage* 0.5);
		printf("TotalScore: %.2f\n",Total_Score);
		
		if(Total_Score>=80){
		printf("Admitted to Computer Science\n");
		}
		else if(Total_Score>=65){
			printf("Admitted to Software Engineering\n");
		}
		else if(Total_Score>=50){
			printf("Admitted to Information Technology\n");
		}
	    else{
		printf("Rejected\n");
	}
	return 0;
}










