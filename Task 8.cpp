#include<stdio.h>

int main()
{
	int zone_type,driver_speed,base_fine,total_fine;
	printf("Zone_Type,Speed_limit: \n");
	scanf( "%d %d",&zone_type,&driver_speed);
	base_fine=1000;
	
	switch(zone_type){
		case 1://School
		{
			if(driver_speed>50){
				total_fine=2*base_fine;
			}
			else{
				total_fine=base_fine;
			}
			printf("Total Fine: %d\n",total_fine);
			break;
		}
		case 2://Highway
		{
			if(driver_speed>120){
				total_fine=2*base_fine;
			}
			else{
				total_fine=base_fine;
			}
			printf("Total Fine: %d\n",total_fine);
			break;
		}
		case 3://Residential Area
		{
			if(driver_speed>70){
				total_fine=2*base_fine;
		}
			else{
				total_fine=base_fine;
			}
			printf("Total Fine: %d\n",total_fine);
            break; 
		}
		default:
			printf("Invalid Zone Type");	
			
	}
	return 0;
}












