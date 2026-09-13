#include<stdio.h>

int main()
{
	int hour,members;
	float bill_amount,final_amount,discount;
	printf("Hour,Members: \n");
	scanf("%d %d",&hour,&members);
	printf("Bill Amount: \n");
	scanf("%f",&bill_amount);
	
	if((hour>=15&&hour<=17)&&(members==0||members==1)){
		discount=bill_amount*0.25;
		final_amount=bill_amount-discount;
		printf("Final Amount: %.2f\n",final_amount);
	}
	else if(hour>=15&&hour<=17){
		discount=bill_amount*0.2;
		final_amount=bill_amount-discount;
		printf("Final Amount: %.2f\n",final_amount);
	}
	else if(members==0||members==1){
		discount=bill_amount*0.1;
		final_amount=bill_amount-discount;
		printf("Final Amount: %.2f\n",final_amount);
	}
	else{
		printf("No Discount Applicable");
	}
	return 0;
}
