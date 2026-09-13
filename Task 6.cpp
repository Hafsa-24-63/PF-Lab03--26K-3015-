#include<stdio.h>

int main()
{
	int plan_choice,time,price,total_bill;
	printf("Plan Choice, Timings: \n");
	scanf("%d %d",&plan_choice,&time);
	
	switch(plan_choice){
		case 1://Plan 1
		{
		price=500;
		if(time<=1000){
			total_bill=price;
		}
	    else{
	    	total_bill=price+((time-1000)*2);
	    }
	    printf("Total Bill: %d\n",total_bill);
		break;
	}
		case 2://Plan 2
		{
		price=800;
		if(time<=2000){
			total_bill=price;		
		}
		else{
			total_bill=price+((time-2000)*2);
		}
	    printf("Total Bill: %d\n",total_bill);
        break;
	}		
	    case 3://Plan 3
	    {
	    price=1200;
	    printf("Total Bill: %d\n",price);
	    break;
	}
	    case 4://Plan 4
	    {
	    	total_bill=1*time;
	    	printf("Total Bill: %d\n",total_bill);
	    	break;
		}
		}
		return 0;
			
	}

