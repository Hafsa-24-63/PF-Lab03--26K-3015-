#include<stdio.h>

int main()
{
	int account_type;
	float account_balance,annual_interest;
	printf("Account Type: \n");
	scanf("%d",&account_type);
	printf("Account Balance: \n");
	scanf("%f",&account_balance);

	
	switch(account_type){
		case 1://Savings
			{
				if(account_balance>100000){
					annual_interest=account_balance*0.04;
					printf(" Annual Interest: %f\n",annual_interest);
				}
				else{
					annual_interest=account_balance*0.02;
					printf("Annual Interest: %f\n",annual_interest);
				}
				break;
			}
		case 2://Current
				printf("No Interest \n");
				break;
		case 3://Fixed Deposits
			{
		        annual_interest=account_balance*0.08;
				printf("Annual Interest: %f\n",annual_interest);
				break;
			}
		default:
                printf("Invalid Account Type\n");			
			
	}
	return 0;
	
}


b









