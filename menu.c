#include "gym.h"

void main_menu(void){	   					//1
    getchar();
    system("cls"); 
    printf("****** Integrated Gymnasium Management System *******\n");
    printf("*                1.  User login			*\n");
    printf("*                2.  Administrator login            *\n");
    printf("*                3.  Register                       *\n");
    printf("*                4.  Exit                           *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void user_func_menu(void){					//1.1
	getchar();
	system("cls");
    printf("******************* User Function *******************\n");
    printf("*                1.  Query and Reserve		*\n");
    printf("*                2.  Modify personal information    *\n");
    printf("*                3.  View my order                  *\n");
    printf("*                4.  Log off                        *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void adm_func_menu(void){					//1.2
    getchar();
    system("cls");
    printf("************** Administrator Function ***************\n");
    printf("*                1.  Reserving management 		*\n");
    printf("*                2.  Site management                *\n");
    printf("*                3.  Modify personal information    *\n");
    printf("*                4.  Log off                        *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void reserve_management_menu(void){                   //1.2.1
    getchar();
    system("cls");
    printf("*************** Reserving Management ****************\n");
    printf("*                1.  Query historical order		*\n");
    printf("*                2.  Count order                    *\n");
    printf("*                3.  Back to administrator function *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void count_order_menu(void){	 					//1.2.1.2
	getchar();
	system("cls");
    printf("******************* Count Order *********************\n");
    printf("*                1. Sort by quantity 		*\n");
    printf("*                2. Sort by turnover 		*\n");
    printf("*                3. Sort by utilize rate            *\n");
    printf("*                4. Count turnover   		*\n");
    printf("*                5. Count best liked sport		*\n");
    printf("*                6. Count distribution of user's age*\n");
    printf("*                7. Back to reserving management	*\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void site_management_menu(){						//1.2.2
    getchar();
    system("cls");
    printf("***************** Site Management *******************\n");
    printf("*                1. Query all the sites 		*\n");
    printf("*                2. Add a new site 			*\n");
    printf("*                3. Back to reserving management	*\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
/*
void register_menu(){						//1.3
    getchar();
    system("cls");
    printf("********************* Register **********************\n");
    printf("*                1. User                 		*\n");
    printf("*                2. Administrator 			*\n");
    printf("*                3. Back to homepage             	*\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
*/
void search_menu(void){
	getchar();
	system("cls");
    printf("******************* Search Mode *********************\n");
    printf("*                1.  By site ID		        *\n");
    printf("*                2.  By category                    *\n");
    printf("*                3.  Sort                           *\n");
    printf("*                4.  Back to homepage               *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void category_menu(void){
	getchar();
	system("cls");
    printf("******************** Category ***********************\n");
    printf("*                1.  Venue				*\n");
    printf("*                2.  Sport			        *\n");
    printf("*                3.  Region                         *\n");
    printf("*                4.  Back to search mode            *\n");
    printf("*****************************************************\n");
    printf("Please choose the category: \n");
}
void book_venue_menu(){
    getchar();
    system("cls");
    printf("********************* Venue *************************\n");
    printf("*                1.  CP_CENTER		        *\n");
    printf("*                2.  HD_CENTER                      *\n");
    printf("*                3.  CY_CENTER                      *\n");
    printf("*                4.  Back to category               *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void book_sport_menu(){
	getchar();
	system("cls");
    printf("********************* Sport *************************\n");
    printf("*                1.  Soccer				*\n");
    printf("*                2.  Basketball                     *\n");
    printf("*                3.  Badminton                      *\n");
    printf("*                4.  Back to category               *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void book_region_menu(){
    getchar();
    system("cls");
    printf("********************* Region ************************\n");
    printf("*                1.  BEI_CP				*\n");
    printf("*                2.  BEI_HD		                *\n");
    printf("*                3.  BEI_CY                         *\n");
    printf("*                4.  Back to category               *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void sort_menu(void){
    getchar();
    system("cls");
    printf("********************** Sort *************************\n");
    printf("*                1.  Rent ¡ü			*\n");	
    printf("*                2.  Rent ¡ý                        *\n");	
    printf("*                3.  Quantity¡ü                     *\n");
    printf("*                4.  Quantity¡ý                     *\n");
    printf("*                5.  Back to search mode            *\n");
    printf("*****************************************************\n");	
    printf("Please enter your choice: ");
} 
void cos_modify_menu(){
    getchar();
    system("cls");
    printf("***************** Customer Modify *******************\n");
    printf("*                1. phone number        		*\n");
    printf("*                2. key         			*\n");
    printf("*                3. e_mail                       	*\n");
    printf("*                4. region                      	*\n");
    printf("*                5. back to main menu               *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
void adm_modify_menu(){
    getchar();
    system("cls");
    printf("*************** Administrator Modify ****************\n");
    printf("*                1. phone number        		*\n");
    printf("*                2. key         			*\n");
    printf("*                3. e_mail                       	*\n");
    printf("*                4. back to main menu               *\n");
    printf("*****************************************************\n");
    printf("Please enter your choice: \n");
}
