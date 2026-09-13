#include<stdio.h>

int main()
{
	int policy_status,vehicle_age,claim_amount,total_claim_amount;
	printf("Policy Status, Vehicle Age, Claim Amount: \n");
	scanf("%d %d %d",&policy_status,&vehicle_age,&claim_amount);
	switch(policy_status){
		case 1://Active 
			{
				if(vehicle_age<10 && claim_amount<=500000){
					total_claim_amount=claim_amount;
					printf("Approved Claim amount: %d\n",total_claim_amount);
				}
				else if(vehicle_age>=10 && vehicle_age<=15 && claim_amount<=500000){
					total_claim_amount=claim_amount*0.5;
					printf("Approved Claim amount: %d\n",total_claim_amount);
				}
				else{
					printf("not approved due to exceeding vehicle age limits");
				}
				break;
			}
		case 0://Inactive
			printf("Rejected");
			
	}
	return 0;
	
}










 
