#include "gym.h"
void inter_main();
void inter_cus_login(CustomerInfo * customerInfo);
void inter_adm_login(AdminInfo * adminInfo);
void reserve_management(AdminInfo * adminInfo);
void count_order(AdminInfo * adminInfo);
void site_management(AdminInfo * adminInfo);

void inter_main(){
    CustomerInfo * customerInfo;
    AdminInfo * adminInfo;
    int n = 0;
    printf("Welcome to boss Yu's Integrated Gymnasium Management System.");
	getchar();
	printf("\033[33m Tips: please press enter to return previous menu.\033[0m");
    main_menu();
    while((n = _get_int_4())!=4){
        switch(n){
            case 1:
                if((customerInfo = Login_user())==NULL){
                    printf("Login failed\n");
                }else{
                    inter_cus_login(customerInfo);
                }
                break;
            case 2:
                if((adminInfo = Login_adm())==NULL){
                    printf("Login failed\n");
                }else{
                    inter_adm_login(adminInfo);
                }
                break;
            case 3:
                if(Register()!=0){
                    printf("register failed\n");
                }
                break;
//            default:
//                printf("wrong choice\n");
        }
        main_menu();
    }
}
void inter_cus_login(CustomerInfo * customerInfo){
    int n = 0;
    user_func_menu();
    while((n = _get_int_4())!=4){
        switch(n){
            case 1:
                inter_search();
                break;
            case 2:
                if(revise_customer_info(customerInfo)!=0){
                    printf("revise information failed\n");
                }
                break;
            case 3:
                cus_show_orders(customerInfo);
                break;
            default:
                printf("wrong choice\n");
                break;
        }
        user_func_menu();
    }
}
void inter_adm_login(AdminInfo * adminInfo){
    int n= 0;
    adm_func_menu();
    while((n = _get_int_4())!=4){
        switch(n){
            case 1:
                reserve_management(adminInfo);
                break;
            case 2:
                site_management(adminInfo);
                break;
            case 3:
                revise_admin_info(adminInfo);
                break;
//          default:
//               printf("wrong choice\n");
//               break;
        }
    }
}

void reserve_management(AdminInfo * adminInfo){
    int n = 0;
    reserve_management_menu();
    while((n = _get_int())!=3){
        switch(n){
            case 1:
                adm_show_orders(adminInfo);
                break;
            case 2:
                count_order(adminInfo);
                break;
//          default:
//              printf("wrong choice\n");
//				break;
        }
        reserve_management_menu();
    }
}
void count_order(AdminInfo * adminInfo){
    int n = 0;
    count_order_menu();
    while((n = _get_int_7())!=7){
        switch(n){
            case 1:
                qsort(adminInfo->site_info,adminInfo->site_info_len,sizeof(SiteInfo *),_comp_site_order_down);
                break;
            case 2:
                qsort(adminInfo->site_info,adminInfo->site_info_len,sizeof(SiteInfo *),_comp_site_profit_down);
                break;
            case 3:
                qsort(adminInfo->site_info,adminInfo->site_info_len,sizeof(SiteInfo *),_comp_site_untilize_down);
                break;
            case 4:
                printf("The total turnover is %.2lf.\n",get_venue_profit(adminInfo));
                break;
            case 5:
                qsort(adminInfo->site_info,adminInfo->site_info_len,sizeof(SiteInfo *),_comp_female_sport);
                printf("the most popular sport in female: %s",adminInfo->site_info[0]->sport);
                qsort(adminInfo->site_info,adminInfo->site_info_len,sizeof(SiteInfo *),_comp_male_sport);
                printf("the most popular sport in male: %s",adminInfo->site_info[0]->sport);
                break;
            case 6:
                analyse_age(adminInfo);
                break;
//            default:
//                printf("wrong choice\n");
        }
        count_order_menu();
    }
}

void site_management(AdminInfo * adminInfo){
    int n;
    site_management_menu();
    while((n = _get_int_3())!=3){
        switch(n){
            case 1:
                adm_show_site(adminInfo);
                break;
            case 2:
                add_site();
                break;
//            default:
//                printf("wrong choice\n");
        }
        site_management_menu();
    }
}
/*
void Resgister(){
    int n;
    register_menu();
    while((n = _get_int_3())!=3){
        switch(n){
            case 1:

                break;
            case 2:
            	
                break;
            default:
                printf("wrong choice\n");
        }
        register_menu();
    }
}
*/
void inter_search(Customer * customer){
	char choice;
	int n;
	
	search_menu();		
	while ((n=_get_int_4())!=4){ 	
		switch(n){					
			case 1:
				if (search_site(get_site_ID)==NULL)
  					fprintf(stderr,"We don't have this site.");    
				else{
					printf("ID\t venue name\t region\t sport\t enter age\t rent\t introduction\n");
					printf("%s\t %s\t %s\t %s\t %d\t %.2lf\t %s\n", (site[i])->ID, (site[i])->admin_info->venue_name, 
							(site[i])->region, (site[i])->sport,(site[i])->enter_age, (site[i])->rent, (site[i])->intro);
					reserve_check(*customer);			//notice£¡ 
				}
				break;

			case 2:
                category_menu();
                while ((n=_get_int_4())!=4){
                	switch(n) {
                        case 1:
                            _private_book_venue_menu();
                            while ((n = get_int()) != 4) {
                                switch (n) {
                                    case 1:
                                    	search_venue("CP_CENTER");
                                    	reserve_check(*customer);			//notice!
										break;
									case 2:
										search_venue( "HD_CENTER");
										reserve_check(*customer);			
										break;
									case 3:
										search_venue("CY_CENTER");
                        				reserve_check(*customer);		
                        			default:
                                        fprintf(stderr, "Wrong choice!");
                                        break;
                                }
                            _private_book_venue_menu();
                        	}
                        	break;
                        	
                        case 2:
                            _private_book_sport_menu();
                            while ((n = _get_int_4()) != 4) {
                                switch (n) {
                                    case 1:
                                    	search_sport("soccer");
                                    	reserve_check(*customer);			
										break;
									case 2:
										search_sport("basketball");
										reserve_check(*customer);		
										break;
									case 3:
										search_sport("badminton");
                        				reserve_check(*customer);			
                        			default:
                                        fprintf(stderr, "Wrong choice!");
                                        break;
                                }
                            _private_book_sport_menu();
                        	}
                        	break;
                        	
                        case 3:
                            _private_book_region_menu();
                            while ((n = _get_int_4()) != 4) {
                                switch (n) {
                                    case 1:
                                    	search_region("BEI_CP");
                                    	reserve_check(*customer);		
										break;
									case 2:
										search_region("BEI_HD");
										reserve_check(*customer);			
										break;
									case 3:
										search_region("BEI_CY");
                        				reserve_check(*customer);		
                        			default:
                                        fprintf(stderr, "Wrong Choice!");
                                        break;
                                }
                            _private_book_region_menu();
                        	}
                        	break;
                        	
                    	default:
               				fprintf (stderr,"Wrong choice!\n");
               				break;
                        }
                	category_menu();
                }
            	break;
            
            case 3:
            	sort_menu();
            	while ((n=_get_int_5())!=5){
	                switch(n){
	                    case 1:
	                        qsort(site,site_size,sizeof(SiteInfo),_comp_site_rent_up));
	                        break;
	                    case 2:
	                        qsort(site,site_size,sizeof(SiteInfo),_comp_site_rent_down));
	                        break;
	                    case 3:
	                        qsort(site,site_size,sizeof(SiteInfo),_comp_site_order_up));
	                        break;
	                    case 4:
	                        qsort(site,site_size,sizeof(SiteInfo),_comp_site_order_down));
	                        break;
//	                    default:
//	                        fprintf (stderr,"Wrong choice!\n");
//	                        break;
                	}
               		sort_menu();
            	}
            	break;
            	   
            default: 
				printf (stderr,"Wrong choice!"); 
               	break;
		}
		search_menu();
	}
	printf("Thank you very much for your trust and support and your satisfaction is the goal we pursue!\n")
}

