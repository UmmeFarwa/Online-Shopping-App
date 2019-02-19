#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void menu(int);
void furniture(int);
void spt_ent(int);
void com_furniture(int);
void buy();
void admin();
void viewrecord();
void admin_features();
void login();
void welcome();
struct  bill
{
		char name[50],item[50],num[20];
		int qty,pri,res;
} rpt;
int main()
{   
      //REGISTRATION OF CUSTOMER//
    system("COLOR 46");
    
	int a,b;
	char email[50],name[50];
	FILE *fptr;
	if((fptr=fopen("userreceipt.rec","ab"))==NULL)
	{
		printf("\nCAN'T OPEN FILE");
		exit(1);
	}
	printf("\t\t\t\t\t===============\n");
	printf("\t\t\t\t\t****WELCOME****\n");
	printf("\t\t\t\t\t================\n\n");
	printf("\n\t\t\t\t***PLEASE REGISTER YOURSELF****\n\n");
	printf("\n\t\t\t\tENTER YOUR NAME:");
	gets(rpt.name);
	fflush(stdin);
	getch();
	printf("\n\t\t\t\tENTER YOUR E-MAIL:");
	gets(email);
	fflush(stdin);
	printf("\n\n\t\t\t\tYOU'RE SUCCESSFULLY REGISTER.......!!\n\n");
	printf("\n\n\t\t\t\tPRESS ENTER TO PROCEED..!");
	fclose(fptr);
	getch();
	system("cls");
	welcome();
}
void welcome()
{                       //WELCOME PAGE//
	int b,a;
    printf("\n\t\t\t\t===============================================");
	printf("\n\n\t\t\t\t****WELCOME TO ONLINE SHOPPING APP****\n");
	printf("\n\t\t\t\t===============================================\n");
	printf("\n\t\t\t\t\t\"*SHOPPING IS THE BEST MEDICINE*\"\n");
	printf("\n\n1-MENU\n\n\n2-ADMINISTRATION ACCESS\n\n\n3-EXIT\n\n\n");
    printf("\n\t\t\t\t\tSELECT ANY OPTION.......: ");
    scanf("%d",&a);
    system("cls");
    switch(a)
    {
    	case 1:                 
    		printf("\n\t\t\t\t\t^^^^^^^^^^^\n");
    		printf("\t\t\t\t         **MENU**\n");
    		printf("\t\t\t\t\t^^^^^^^^^^^\n\n\n");
    		printf("\t\t\t1-ELECTRONIC APPLIANCE\n\t\t\t2-HOME DECOR\n\t\t\t3-COMPUTER COMPONENTS\n\t\t\t4-FURNITURE\n\t\t\t5-BEAUTY\n\t\t\t6-JEWELERY AND ACCESSORIES\n\t\t\t7-SPORTS AND ENTERTAINMENT\n\t\t\t8-CAR ELECTRONICS\n\t\t\t9-SMARTPHONES\n\t\t\t10-SHOES\n\t\t\t11-APPAREL FOR WOMEN\n\t\t\t12-APPAREL FOR MEN\n\t\t\t13-FOOD\n\t\t\t14-BACK\n");
    		printf("\nENTER YOUR CHOICE: ");
    		scanf("%d",&b);
    		system("cls");
    		if(b==14)
    			main();
    		else
    			menu(b);
   					break;
    	case 2:
    		printf("ADMINISTRATION ACCESS");
    		admin();
    		break;
    	case 3:
    		exit(1);
    		default:
			printf("\nINVALID CHOICE\n");
	}
}
void menu(int b)         //MENU
{   int opt;
	system("cls");
	switch(b)
	{
		case 1:  //ELECTRONIC APPLIANCES
			printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\n\t\t\t\t**ELECTRONIC APPLIANCES**\n");
			printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
			printf("\t\t1-MICROWAVE OVEN\t\tRs.3000/=\n\t\t2-LED\t\t\t\tRs.3500/=\n\t\t3-REFRIGERATOR\t\t\tRs.10,000/=\n\t\t4-AIR CONDITIONER\t\tRs.50,000/=\n\t\t5-VACUUM CLEANER\t\tRs.5000/=\n\t\t6-ELECTRIC WATER HEATER TANK\tRs.5000/=\n\t\t7-GAS FIREPLACE \t        Rs.3000/=\n\t\t8-CLOTHES DRYER \t\tRs.8000/=\n\t\t9-WASHING MACHINE \t\tRs.20,000/=\n\t\t10-WINDOW FAN\t\t\tRs.10,000/=\n\t\t11-BACK\n");
			printf("\nENTER YOUR CHOICE:");
			scanf("%d",&opt);
			if(opt==11)
				{
					system("cls");
				welcome();
				}
			else
			{
				buy();
				system("cls");
				welcome();
			}
			break;

		case 2:
			                //HOME DECOR
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t   **HOME DECOR**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-WALL STICKERS\t\t\t\tRs.2000/=\n\t\t2-PAINTING AND CALLIGRAPHY\t\tRs.4000/=\n\t\t3-ORNAMENTS\t\t\t\tRs.5000/=\n\t\t4-CLOCKS\t\t\t\tRs.4000/=\n\t\t5-CANDLES AND HOLDERS\t\t\tRs.800/=\n\t\t6-FRAME\t\t\t\t\tRs.3000/=\n\t\t7-VASES\t\t\t\t\tRs.5000/=\n\t\t8-PLAQUES AND SIGNS\t\t\tRs.5000/=\n\t\t9-STATUES AND SCULPTURES\t\tRs.5000/=\n\t\t10-DECORATIVE MIRRORS\t\t\tRs.7000/=\n\t\t11-FIGURINES AND MANIATURES\t\tRs.8000/=\n\t\t12-PHOTO ALBUMS\t\t\t\tRs.1000/=\n\t\t13-BACK\n");
			printf("\nENTER YOUR CHOICE:");
			scanf("%d",&opt);
			if(opt==13)
				{
					system("cls");
				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();

			}
			break;
		case 3:
			            //COMPUTER COMPNENTS
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**COMPUTER COMPONENTS**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-PROCESSORS\t\t\tRs.3000/=\n\t\t2-MOTHERBOARD\t\t\tRs.5000/=\n\t\t3-RAMs\t\t\t\tRs.3000/=\n\t\t4-GRAPHICS CARD\t\t\tRs.6000/=\n\t\t5-INTERNAL HARD DRIVES\t\tRs.9000/=\n\t\t6-ADD ON CARDS\t\t\tRs.3000/=\n\t\t7-SOUND CARDS\t\t\tRs.4000/=\n\t\t8-PC POWER SUPPLIES\t\tRs.5000/=\n\t\t9-OPTICAL DRIVES\t\tRs.900/=\n\t\t10-FLOPPY DRIVES\t\tRs.7000/=\n\t\t11-COMPUTER CASES AND TOWERS\tRs.9000/=\n\t\t12-BACK\n");
			printf("\nENTER YOUR CHOICE:");
			scanf("%d",&opt);
			if(opt==12)
				{
					system("cls");
				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
				
			}
			break;
		case 4:
			     //FURNITURE
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t    **FURNITURE**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			furniture(b);
		    buy();
			system("cls");
			welcome();
			break;
		case 5:       //BEAUTY
			printf("\n\t\t\t\t\t^^^^^^^^^^\n");
			printf("\t\t\t\t\t**BEAUTY**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^\n");
			printf("\t\t1-MASCARA\t\tRs.500/=\n\t\t2-FOUNDATION\t\tRs.2000/=\n\t\t3-LIP GLOSS\t\tRs.200/=\n\t\t4-EYE SHADOW\t\tRs.300/=\n\t\t5-EYELINER\t\tRs.1000/=\n\t\t6-NAIL POLISH\t\tRs.2000/=\n\t\t7-CONCEALER\t\tRs.5000/=\n\t\t8-BACK\n");
			printf("\nENTER YOUR CHOICE:");
			scanf("%d",&opt);
			if(opt==8)
				{
		   	system("cls");
			   welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 6:
                        //JEWELRY AND ACCESSORIES
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**JEWELRY AND ACCESSORIES**");
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-BRACELETS\t\tRs.500/=\n\t\t2-RINGS\t\t\tRs.200/=\n\t\t3-NECLACES\t\tRs.700/=\n\t\t4-EARRINGS\t\tRs.500/=\n\t\t5-KEY CHAINS\t\tRs.500/=\n\t\t6-HAIR PINS\t\tRs.300/=\n\t\t7-ANKLETS\t\tRs.500/=\n\t\t8-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
			if(opt==8)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 7:
			//SPORTS AND ENTERTAINMENT
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**SPORTS AND ENTERTAINMENT**");
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		    spt_ent(b);
		   	buy();
		   	system("cls");
			welcome();
			break;
		case 8:
			//CAR ELECTRONICS
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**CAR ELECTRONICS**");
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-CAR INTELLIGENT SYTEM\t\tRs.10,000/=\n\t\t2-CAR VIDEO SURVEILLANCE\tRs.5000/=\n\t\t3-CAR AUDIO\t\t\tRs.4000/=\n\t\t4-BATTERY JUMP CABLE\t\tRS.3000/=\n\t\t5-JUMP STARTER\t\t\tRs.2500/=\n\t\t6-BACK");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
			if(opt==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 9:
			        //SMART PHONES
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**SMART PHONES**");
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-APPLE iPHONE 8\t\tRs.90,000/=\n\t\t2-APPLE iPHONE 8 PLUS\t\tRs.1,0000/=\n\t\t3-SAMSUNG GALAXY A8+\t\tRs.40,000/=\n\t\t4-SAMSUNG GALAXY ON MAX \tRs.50,000/=\n\t\t5-SAMSUNG GALAXY ON7 PRIME\tRs.40,000/=\n\t\t6-SAMSUNG GALAXY J2\t\tRs.20,000/=\n\t\t7-SAMSUNG GALAXY J7 NXT\t\tRs.50,000/=\n\t\t8-SAMSUNG GALAXY NOTE 8\t\tRs.70,000/=\n\t\t9-APPLE iPHONE X\t\tRs.1,00000/=\n\t\t10-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
			if(opt==10)
				{
					system("cls");
                    welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 10:
			           //SHOES
			printf("\n\t\t\t\t\t  ^^^^^^^^^\n");
			printf("\t\t\t\t\t  **SHOES**\n");
			printf("\t\t\t\t\t  ^^^^^^^^^^\n");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**MEN's SHOES**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-BOOTS\t\t\tRs.3000/=\n\t\t2-CASUAL SHOES\t\tRs.4000/=\n\t\t3-LOAFERS\t\tRs.3000/=\n\t\t4-FORMAL SHOES\t\tRs.3000/=\n\t\t5-VULCANIZE SHOES\tRs.5000/=\n");
		    printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**WOMEN's SHOES**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t6-HIGH HEELS SANDALS\tRs.3000/=\n\t\t7-CLASSIC BLACK PUMPS\tRs.4000/=\n\t\t8-NEUTRAL PUMPS\t\tRs.3000/=\n\t\t9-D'ORSAY FLATS\t\tRs.3000/=\n\t\t10-SUMMERY ESPADRILLES\tRs.5000/=\n\t\t11-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
		    if(opt==11)
		    {
		    		system("cls");

		    	welcome();
			}
			else
			{
				buy();
				system("cls");
				welcome();
			}
			break;
			case 11:
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**APPAREL FOR WOMEN**\n");
			printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-COATS\t\t\tRs.5000/=\n\t\t2-TOPS\t\t\tRs.2000/=\n\t\t3-CARDIGAN\t\tRs.5000/=\n\t\t4-HOODIES\t\tRs.3000/=\n\t\t5-JEANS\t\t\tRs.2000/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
			if(opt==6)
				{	
				system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 12:
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**APPAREL FOR MEN**\n");
			printf("\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-HOODIES\t\tRs.2000/=\n\t\t2-JACKETS\t\tRs.3000/=\n\t\t3-JEANS\t\t\tRs.5000/=\n\t\t4-SUITS\t\t\tRs.8000/=\n\t\t5-T-SHIRTS\t\tRs.1000/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
			if(opt==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 13:
			printf("\n\t\t\t\t\t\t^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**FOOD**\n");
			printf("\t\t\t\t\t\t^^^^^^^^^^\n");
			printf("\t\t1-SNACKS\t\tRs.200/=\n\t\t2-CANNED GOODS\t\tRs.1000/=\n\t\t3-PASTA\t\t\tRs.500/=\n\t\t4-BOXED MEALS\t\tRs.1500/=\n\t\t5-CONDIMENTS\t\tRs.500/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt);
			if(opt==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
			case 14:
				welcome();
				getch();
				break;
		default:
			printf("\nINVALID CHOICE\n");


	}
}
void furniture(int b)
{
	int fur,furopt;
	printf("\t\t1-OFFICE FURNITURE\n\t\t2-HOME FURNITURE\n\t\t3-OUTDOOR FURNITURE\n\t\t4-COMMERCIAL FURNITURE\n\t\t5-CHILDREN FURNITURE\t\t\n\t\t6-BACK\n");
	printf("\nENTER YOUR CHOICE: ");
	scanf("%d",&fur);
	system("cls");
		if(fur==6)
			{
					system("cls");

			welcome();
				}
			else
			{
	switch(fur)
	{
		case 1:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**OFFICE FURNITURE**\n");
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-OFFICE CHAIRS\t\tRs.5000/=\n\t\t2-COMPUTER DESKS\tRs.6000/=\n\t\t3-LAPTOP DESKS\t\tRs.10,000/=\n\t\t4-MAGAZINE RACKS\tRs.2000/=\n\t\t5-OFFICE SOFAS\t\tRs.50,000/=\n\t\t6-RECEPTION DESKS\tRs.25,000/=\n\t\t7-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&furopt);
			if(furopt==7)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 2:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**HOME FURNITURE**\n");
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-CUPBOARD\t\tRs.5000/=\n\t\t2-DINING TABLE\t\tRs.8000/=\n\t\t3-WARDROBE\t\tRs.4000/=\n\t\t4-TELEVISION\t\tRs.9000/=\n\t\t5-SOFA\t\t\tRs.8000/=\n\t\t6-LAMP\t\t\tRs.2000/=\n\t\t7-BOOKCASE\t\tRs.7000/=\n\t\t8-COUCH\t\t\tRs.9000/=\n\t\t9-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&furopt);
			if(furopt==9)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 3:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**OUTDOOR FURNITURE**\n");
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-HAMMOCKS\t\tRs.3000/=\n\t\t2-AWNINGS\t\tRs.5000/=\n\t\t\3-GARDEN CHAIRS\t\tRs.7000/=\n\t\t4-OUTDOOR TABLES\tRs.20,000/=\n\t\t5-PLANT SHELVES\t\tRs.8000/=\n\t\t6-GARDEN CHAIR\t\tRs.3000/=\n\t\t7-GARDEN SETS\t\tRs.8000/=\n\t\t8-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&furopt);
			if(furopt==8)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 4:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**COMMERCIAL FURNITURE**\n");
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-HOTEL FURNITURE\n\t\t2-LIBRARY FURNITURE\n\t\t3-SCHOOL FURNITURE\n\t\t4-LABORATORY FURNITURE\n\t\t5-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&furopt);
			if(furopt==5)
				{
						system("cls");

				welcome();
				}
			else
			{
			com_furniture(furopt);
			}
			break;
		case 5:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**CHILDREN FURNITURE**\n");
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-CHILDREN SOFAS\t\tRs.5000/=\n\t\t2-CHILDREN STOOLS\t\tRs.2000/=\n\t\t3-CHILDREN WARDROBES\t\tRs.6000/=\n\t\t4-CHILDREN BEDS\t\t\tRs.8000/=\n\t\t5-CHILDREN CABINETS\t\tRs.4000/=\n\t\t6-CHILDREN CHAIRS\t\tRs.3000/=\n\t\t7-CHILDREN FURNITURE SETS\tRs.9000/=\n\t\t8-CHILDREN TABLES\t\tRs.5000/=\n\t\t9-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&furopt);
			if(furopt==9)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		default:
			printf("\nINVALID CHOICE\n");
	}
	}
}
void spt_ent(int b)
{
	int opt_se,se;
			printf("\t\t1-SPORTS CLOTHING\n\t\t2-SNEAKERS\n\t\t3-CYCLING\n\t\t4-MUSICAL INSTRUMENTS\n\t\t5-FITNESS AND BODY BUILDING\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&se);
				system("cls");
			if(se==6)
				{
						system("cls");

				welcome();
				}
			else
{
	switch(se)
	{
		case 1:
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**SPORTS CLOTHING**");
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-JERSEYS\t\tRs.1500/=\n\t\t2-JACKETS\t\tRs.2000/=\n\t\t3-ROBES\t\t\tRs.2000/=\n\t\t4-VESTS\t\t\tRs.1000/=\n\t\t5-T-SHIRTS\t\tRs.900/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&opt_se);
			if(opt_se==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 2:
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**SNEAKERS**");
			printf("\n\t\t\t\t\t\t^^^^^^^^^^^^\n");
			printf("\t\t1-DANCE SHOES\t\tRs.3000/=\n\t\t2-BASEBALL SHOES\tRs.2500/=\n\t\t3-GOLF SHOES\t\tRs.2000/=\n\t\t4-SKATE SHOES\t\tRs.2000/=\n\t\t5-VOLLEYBALL SHOES\tRs.2000/=\n\t\t6-RUNNING SHOES\t\tRs.2500/=\n\t\t7-BACK\n");
		    printf("\nENTER YOUR CHOICE: ");
    		scanf("%d",&opt_se);
    		if(opt_se==7)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
	case 3:
	   	printf("\n\t\t\t\t\t\t^^^^^^^^^^^^\n");
		printf("\t\t\t\t\t\t**CYCLING**");
		printf("\n\t\t\t\t\t\t^^^^^^^^^^^^\n");
		printf("\t\t1-BICYCLE\t\t\tRs.3000/=\n\t\t2-SELF BALANCE SCOOTERS\t\tRs.5000/=\n\t\t3-ELECTRIC BICYCLE\t\tRs.10,000/=\n\t\t4-BACK\n");
		printf("\nENTER YOUR CHOICE: ");
    	scanf("%d",&opt_se);
    	if(opt_se==4)
				{
					
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}

		break;
	case 4:
	    printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t\t\t\t\t\t**MUSICAL INSTRUMENTS**");
		printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t\t1-GUITAR\t\tRs.5000/=\n\t\t2-VIOLIN\t\tRs.7000/=\n\t\t3-PIANO\t\t\tRs.10,000/=\n\t\t4-TRUMPET\t\tRs.4000/=\n\t\t5-HARMONICA\t\tRs.5000\n\t\t6-BACK\n");
	    printf("\nENTER YOUR CHOICE: ");
    	scanf("%d",&opt_se);
    	if(opt_se==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
		break;

	case 5:
	    printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t\t\t\t\t\t**FITNESS AND BODY BUILDING**");
		printf("\n\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		printf("\t\t1-FITNESS GLOVES\tRs.2000/=\n\t\t2-WRESTLING SHOES\tRs.2500/=\n\t\t3-CALF MACHINE\t\tRs.5000/=\n\t\t4-TREADMILL\t\tRS.10,000/=\n\t\t5-PULL UP BAR\t\tRs.5000/=\n\t\t6-BACK\n");
	    printf("\nENTER YOUR CHOICE: ");
    	scanf("%d",&opt_se);
    	if(opt_se==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
		break;
		default:
	     printf("INVALID CHOICE");
			}
	}
}
void com_furniture(int furopt)
{
	int com_opt;
	switch(furopt)
	{
		case 1:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t\t**HOTEL FURNITURE**\n");
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-CHAIRS\t\tRs.5000/=\n\t\t2-TABLE TOPS\t\tRs.6000/=\n\t\t3-TABLE BASES\t\tRs.7000/=\n\t\t4-BOOTHS\t\tRs.5000/=\n\t\t5-PATIO FURNITURE\tRs.7000/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&com_opt);
			system("cls");
			if(com_opt==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 2:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**LIBRARY FURNITURE**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-SHELVES\t\tRs.5000/=\n\t\t2-DESK\t\t\tRs.2000/=\n\t\t3-CHAIR\t\t\tRs.5000/=\n\t\t4-CATALOGUE CABINET\tRs.10,000/=\n\t\t5-WORK TABLE\t\tRs.6000/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&com_opt);
			system("cls");
			if(com_opt==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 3:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**SCHOOL FURNITURE**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-CLASSROOM CHAIRS\t\tRs.1500/=\n\t\t2-PRESCHOOL CUBBIES\t\tRs.3000/=\n\t\t3-STUDENT DESKS\t\t\tRs.3000/=\n\t\t4-BOOK CARTS\t\t\tRs.6000/=\n\t\t5-CLASSROOM STORAGE\t\tRs.10,000/=\n\t\t6-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&com_opt);
			system("cls");
			if(com_opt==6)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
		case 4:
			printf("\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t\t\t\t**LABORATORY FURNITURE**");
			printf("\n\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^\n");
			printf("\t\t1-INDUSTRIAL AND LABORATORY TABLES\t\tRs.10,000/=\n\t\t2-LABORATORY CABINETS AND COUNTERS\t\tRs.15,000/=\n\t\t3-CHEMICAL STORAGE CABINETS\t\t\tRs.5000/=\n\t\t4-LAB WORKSTATIONS\t\t\t\tRs.10,000/=\n\t\t5-SAFETY STATIONS\t\t\t\tRs.5000/=\n\t\t6-LABORATORY CART\t\t\t\tRs.7000/=\n\t\t7-BACK\n");
			printf("\nENTER YOUR CHOICE: ");
			scanf("%d",&com_opt);
			system("cls");
			if(com_opt==7)
				{
						system("cls");

				welcome();
				}
			else
			{
			buy();
			system("cls");
			welcome();
			}
			break;
	}
}
void buy()    //CUSTOMER RECEIPT
{
	char buy,buymore,item_name;
	int b,price,quantity,total,i;
	fflush(stdin);
	printf("\nARE YOU SURE YOU WANT TO BUY THIS?\nPRESS Y FOR CONTINUE AND N FOR EXIT(Y/N):\n");
	scanf("%c",&buy);
	if(buy=='Y'||'y')
	
	{
	char numstr[100];
	fflush(stdin);
	FILE *fptr;
	if((fptr=fopen("usserreceipt.rec","ab"))==NULL)

	{
		printf("\nCAN'T OPEN FILE");
		exit(1);
	}
	printf("ENTER YOUR NAME:");
	gets(rpt.name);
	fflush(stdin);
	printf("\nENTER ITEM NAME:");
	gets(rpt.item);
	printf("\nENTER QUANTITY:");
	scanf("%d", &rpt.qty);
	printf("\nENTER PRICE: ");
	fflush(stdin);
	scanf("%d", &rpt.pri);
	fflush(stdin);
	printf("\nENTER MOBILE NUMBER:");
	gets(rpt.num);
	rpt.res=rpt.qty*rpt.pri;
	fwrite(&rpt ,sizeof(rpt) , 1 , fptr);
	system("cls");
	fflush(stdin);
	printf("\n\t\t\t\t************RECEIPT*************\n\n");
	printf("\n\t\t\t\tCOSTUMER NAME:%s\n\t\t\t\tITEM NAME: %s\n\t\t\t\tQUANTITY: %d \n\t\t\t\tITEM PRICE: %d \n\t\t\t\tTOTAL AMOUNT: %d\n\t\t\t\tMOBILE NO:%s\n",rpt.name,rpt.item,rpt.qty,rpt.pri,rpt.res,rpt.num);
	printf("\n\t\t\t\t***THANK YOU FOR SHOPPING HERE*****");
	fclose(fptr);
	getch();
}

	else
	{
		welcome();
	}

}

void admin()               //ADMINISTRATION ACCESS
{
	char name[30] , pass[30];
		printf("ENTER YOUR NAME: ");
		getch();
					fflush(stdin);
					gets(name);
					printf("\n\n\nENTER YOUR PASSWORD: ");
						char ch1,ch2,ch3,ch4,ch5;
							ch1=getch(); printf("*");
							ch2=getch(); printf("*");
							ch3=getch(); printf("*");
							ch4=getch(); printf("*");
							ch5=getch(); printf("*");	
		if((ch1=='F' || ch1=='f') && (ch2=='A' || ch2=='a') && (ch3=='R' || ch3=='r') && (ch4=='W' || ch4=='w') && (ch5=='A' || ch5=='a')) 
	{      getch();
			system("cls");
		printf("\t\t\t\t\t\t***WELCOME MAM**\n");
		admin_features();}
else {
		printf("\nInvalid!!");
		getch();
		system("cls");
		welcome();
		
}
}

void admin_features()          //CUSTOMER RECORDS MANAGE BY ADMIN
{
	FILE *fptr;

/*	long int recsize;
	recsize=sizeof(rpt); */
{
	int choice;
	system("cls");
	printf("\n\n\t\t\t\t*******WELCOME MAM*******\n");
	printf("\t\t\t\t========================\n");
	printf("\n\n\t\t1-view records\n\n");
	printf("\n\n\t\t2-Delete records\n\n");
	printf("\n\n\t\t3-search record\n\n");
	printf("\n\n\t\t4-Exit\n\n");
	printf("\n\t\tENTER YOR CHOICE:");
	fflush(stdin);
	choice=getche();
	getch();
	switch(choice)
	{             //VIEW RECORDS

		case '1':
			{
                fptr=fopen("usserreceipt.rec","rb");
                if(fptr==NULL) {
                  printf("File Not found!");
                  
                }
                system("cls");
			while(fread(&rpt,sizeof(rpt),1,fptr)==1)
			{
			//	system("cls");
			printf("\nCOSTUMER NAME:%s\nITEM NAME: %s\nQUANTITY: %d \nITEM PRICE: %d \nTOTAL AMOUNT: %d\n MOBILE  NO: %s\n",rpt.name,rpt.item,rpt.qty,rpt.pri,rpt.res,rpt.num);
			}//getch();
			fclose(fptr);
			getch();
			admin_features();

//getch();
		}

		case '2':
		{                      //DELETE RECORD
			FILE *fp, *fp_tmp;
			int found = 0;
			char number[20];
			printf("\nENTER MOBILE NO:");
			gets(number);
            fp = fopen("usserreceipt.rec", "rb");
            if (!fp) {
                printf("Unable to open file");
                exit(0);
            }
            fp_tmp = fopen("temp.rec", "wb");
            if (!fp_tmp) {
                printf("Unable to open file temp file.");
                exit(0);
            }

            while (fread(&rpt,sizeof(rpt),1,fp) != NULL) {
                if (strcmp (rpt.num, number) == 0) {
                    printf("A record with requested name found and deleted.\n\n");
                    found=1;
                } else {
                    fwrite(&rpt, sizeof(rpt), 1, fp_tmp);
                }
            }
            if ( !found) {
                printf("No record(s) found with the request");
            }

            fclose(fp);
            fclose(fp_tmp);

            remove("usserreceipt.rec");
            rename("temp.rec","usserreceipt.rec");
            getch();
            system("cls");
			admin_features();
			break;
			
			
	}
        FILE *fptr;    
		admin_features();  
                               //SEARCH RECORD
			case '3':
			{
			char  number[20];
				long int offset;
				if((fptr=fopen("usserreceipt.rec","rb+"))==NULL)
	{
				printf("CAN'T OPEN AN FILE");
				exit(1);
	}
				printf("\nENTER mobile no.");
				scanf("%s",&number);
		while(fread(&rpt,sizeof(rpt),1,fptr)==1)
		{
			if(strcmp(number,rpt.num)==0)
			{
			printf("\nCOSTUMER NAME:%s\nITEM NAME:%s\nQUANTITY:%d\nITEM PRICE:%d\nTOTAL AMOUNT:%d\nmobile no:%s\n",rpt.name,rpt.item,rpt.qty,rpt.pri,rpt.res,rpt.num);
			getch();
			}
}
    system("cls");
	fclose(fptr);
	system("cls");
	admin_features();
	break;
}
			case '4':
				system("cls");
				welcome();
				break;
				default:
					printf("INVALID CHOICE");
				 	}
}
}




