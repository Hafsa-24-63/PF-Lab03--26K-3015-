#include<stdio.h>

int main()
{
	int income,age,existing_repayment;
	printf("Income:-  Age:-  Existing Repayment:-\n ");
	scanf("%d %d %d", &income,&age,&existing_repayment);
	
	if (income>30000) {
		if (age>21&&age<60){
			if (existing_repayment<40000){
				printf("Approved\n");
			}	
				else{
				printf("Rejected due to high Debit Ratio\n");
			}
		}
			else{
				printf("Rejected due to Age\n");
			}
	}
	else{
			printf("Rejected due to Income\n");
		}
	return 0;
}










