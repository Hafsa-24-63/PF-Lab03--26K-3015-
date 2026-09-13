#include<stdio.h>

int main(){
	int membership_type,time_slot,final_monthly_fee,base_rate;
	printf("Membership Type,Time Slot: \n");
	scanf("%d %d",&membership_type,&time_slot);
	
	switch(membership_type){
		case 1://Student
			{
			base_rate=2000;
			printf("Base Rate: %d\n",base_rate);
				switch(time_slot){
				    case 1://Morning
				    	{
				    	final_monthly_fee=base_rate+(base_rate*0.15);
				        printf("Final Monthly fee: %d\n",final_monthly_fee);
				        break;
						}
						case 2://Evening
				        {
				        final_monthly_fee=base_rate;
			            printf("Final Monthly Fee: %d\n",final_monthly_fee);
				        break;
			}
		}
		break;
	}
        case 2://Regular
        	{
		    base_rate=3500;
		   	printf("Base Rate: %d\n",base_rate);
		        switch(time_slot){
				    case 1://Morning
				    	{
				    	final_monthly_fee=base_rate+(base_rate*0.15);
				        printf("Final Monthly fee: %d\n",final_monthly_fee);
				        break;
						}
			case 2://Evening
				{
				final_monthly_fee=base_rate;
				printf("Final Monthly Fee: %d\n",final_monthly_fee);
				break;
			}
		
	}
	break;
}
		case 3://Senior Citizen
			{
			base_rate=2500;
			printf("Base Rate: %d\n",base_rate);
			switch(time_slot){
				    case 1://Morning
				    	{
				    	final_monthly_fee=base_rate+(base_rate*0.15);
				        printf("Final Monthly fee: %d\n",final_monthly_fee);
				        break;
						}
			        case 2://Evening
				        {
				        final_monthly_fee=base_rate;
				        printf("Final Monthly Fee: %d\n",final_monthly_fee);
	                    break;
			}
		
		}
		break;	
	}
}
	return 0;
}
















