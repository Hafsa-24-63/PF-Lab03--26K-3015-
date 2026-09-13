#include<stdio.h>

int main()
{
	int heart_rate;
	float temp;
	printf("Heart Rate: \n");
	scanf("%d",&heart_rate);
	printf("Temperature: %.2f\n",temp);
	scanf("%f",&temp);
	
	if((heart_rate>120) || (temp>39)){
		printf("Critical-Immediate Attention\n");
	}
	else if((heart_rate>=100&&heart_rate<=120)&&(temp>=37.5&&temp<=39)){
		printf("Urgent\n");
	}
	else{
		printf("Normal-Wait in Queue\n");
	}
	return 0;
	
}











