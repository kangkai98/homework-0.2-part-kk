#include "gym.h"
int cus_size= 0;
int adm_size= 0;
int rent_size= 0;
int site_size= 0;

CustomerInfo ** customer = NULL;
AdminInfo ** admin = NULL;
RentalInfo ** rent = NULL;
SiteInfo ** site = NULL;


int main() {
    customer = (CustomerInfo **)malloc(sizeof(CustomerInfo)*CUS_LEN);
    admin = (AdminInfo **)malloc(sizeof(AdminInfo)*ADM_LEN);
    rent = (RentalInfo **)malloc(sizeof(RentalInfo)*RENT_LEN);
    site = (SiteInfo **)malloc(sizeof(SiteInfo)*SITE_LEN);
    _arr_init();
	
	printf("Welcome to boss Yu's Integrated Gymnasium Management System.");
	getchar();
	printf("\033[33m Tips: please press enter to return previous menu.\033[0m");
	main_menu();
	while ((n=get_int())!=4){
        switch(n){
            case 1:
            	
            	break;
            case 2:
            	
            	break;
        	case 3:
        		
        		break;
        }
    main_menu();
    }
	
    return 0;
}
