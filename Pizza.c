/* The Pizza Parler Order */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void mainmenu();

void customer();
void aboutus();


void vegetarian(void);
void nonvegetarian(void);


void bill(int);
void details();

FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;

int main()
{
    mainmenu();
    return 0;
}

void mainmenu()
{
    int choice;
    //system("cls");
    
	printf("                 **************************************************************************\n");
	printf("                                           WELCOME TO FOOD ORDER SYSTEM\n");
	printf("                 **************************************************************************");
	printf("\n\n\n          1. CUSTOMER SECTION-->    ");
    printf("\n\n          2. ABOUT US-->");
    printf("\n\n          3. Exit-->");
    printf("\n\n\n             Enter Your Choice --->");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        customer();
        break;

    case 2:
        aboutus();
        break;

    case 3:
        system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");
		printf("******************** Feeling HUNGRY ? Call or Walk-In ************************\n\n");
		exit(0);
    
    default:
        printf("\n\n Enter valid Entry \n\n\n ");
		mainmenu();
    }	

}


void customer()
{
    system("cls");
    int choice;
	printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
    printf("               YOU ARE--->\n\n");
    printf("               1. Vegetarian\n\n");
    printf("               2. Non Vegetarian\n\n");
    printf("               3. Back To Main Menu\n\n");
    printf("   Enter Your Choice  -->");    
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        system("cls");
        vegetarian();
        break;
    
    case 2:
        system("cls");
        nonvegetarian();

    case 3:
        system("cls");
	    mainmenu();
    default:
         system("cls");
        printf("\n INVALID CHOICE ");
        customer();
        break;
    }

}

void aboutus()
{
    system("cls");
    printf("\n THIS FOOD BILLING SYSYTEM C PROGRAM IS DESIGN BY :");
    printf("\n    Amanul Rahiman Shamshuddin Attar \n    DR. J. J. MAGDUM COLLEGE OF ENGINEERING  \n    SECOND YEAR CSE DEPARTMENT");
	printf("\n\n                       *****************************THANK YOU*****************************");
	printf("\n\n");
	printf("    Press Any Key To Go Back.");
	if(getch())
    {
        system("cls");
	    mainmenu();
    }
}

void vegetarian()
{
    int choice;
	int again;
	int quantity;	
	double price=0;
    char v;
	FILE *vmenu;

    printf("                    ****************************************\n                                  VEGETARIAN MENU\n                    ****************************************\n\n");
    vmenu=fopen("vegmenu.txt","rt");
	while((v=getc(vmenu))!=EOF)
        {
        	printf("%c",v);
		}
         fclose(vmenu);
    printf("\n\nEnter What You Want :");
	printf("\n\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 199*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 2:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 305*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 3:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 335*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 4:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 395*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 5:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 450*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			vegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;
    
    default:
        printf("\n \n Enter valid no");
        break;
    }

}

void nonvegetarian()
{
    int choice;
	int again;
	int quantity;	
	double price=0;
    char nv;
	FILE *nvmenu;

    printf("                    ****************************************\n                                  NONVEGETARIAN MENU\n                    ****************************************\n\n");
    nvmenu=fopen("nonvegmenu.txt","rt");
	while((nv=getc(nvmenu))!=EOF)
        {
        	printf("%c",nv);
		}
         fclose(nvmenu);
    printf("\n\nEnter What You Want :");
	printf("\n\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 305*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 2:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 395*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 3:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 450*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 4:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 570*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;

    case 5:
        printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 570*(quantity);

        printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);

        switch (again)
        {
        case 1:
            system("cls");
            printf("\n\n");
			nonvegetarian();
            break;

        case 2:
            bill(total);
            break;        
        default:
            break;
        }

        break;
    
    default:
        printf("\n \n Enter valid no");
        break;
    }

}

void bill(int tot)
{
    int totl = total;
	FILE *ttl;
    ttl = fopen("order.txt","a");
    fprintf(ttl,"\nGrand Total : %d\n",totl);
    fclose(ttl);
	system("cls");
    details();

}

void details()
{   
    char exit;
    int code;
	char name1[20];
	char name2[20];
	long long int phone;
	char address[40];
	char landmark[30];
    double tot = total;
	printf("Please Give Your Contact Details \n");
	printf(" First Name : ");
	scanf("%s",name1);
	printf("Last Name : ");
	scanf("%s",name2);
	printf("Phone : ");
	scanf("%lld",&phone);
	printf("Address : ");
	scanf("%s",address);
	printf("Landmark : ");
	scanf("%s",landmark);
	printf("\n\n");
	printf("Your Entered Details Are --->\n");
	FILE *cust;
	cust = fopen("order.txt","a");
	fprintf(cust,"Order Placed By : %s %s\nPhone number : %lld\n",name1,name2,phone);
	fclose(cust);
	system("cls");
	printf("    -->First Name :  %s\n    -->Last Name   :  %s\n    -->Phone     :%lld \n    -->Address  :%s \n    -->Landmark  :%s \n\n    -->Your Total Amount Is : Rs. %.2lf\n\n",name1,name2,phone,address,landmark,tot);
	printf("\n\n\n");
	printf("                       *********************************************************************************************\n");
	printf("                                             Your Order Will Be At Your Door In 30 minutes.\n");
	printf("                                                       .....HAPPY ORDERING.....\n");
	printf("                       *********************************************************************************************\n");

    printf("Press Any To The MainMenu");
    if(getch())
        customer();
}

