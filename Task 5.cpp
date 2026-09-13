#include<stdio.h>

int main()
{
	int weight,total_people;
	printf("Weight, Total People: \n");
	scanf("%d %d",&weight,&total_people);
	
	if (weight<=1000 && total_people<=10){
			printf("Approval & elevator operate's normally\n");
		}
		else if(weight>1000 && total_people>10){
			printf("Denied due to exceeding both limits");
		}
		else if(total_people>10){
			printf("Denied entry due to exceeding people limit\n");
		}
	else{
		printf("Denied due to overweight\n");
	}
	return 0;
}
