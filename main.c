#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>


int ok=0,ok1=0;
int z=0;

char *ii;
char *l;
char *u;
char *t;
char *a;

void add()
{

    system("cls");
    printf("\n\t\t Give Student information\n");
    FILE *fpt = fopen("user1.CSV", "a+");
    FILE *fpp = fopen("user2.CSV", "a+");
    if(fpt == NULL)
    {
        printf("Couldn't open file\n");
        return;
    }
    if(fpp == NULL)
    {
        printf("Couldn't open file\n");
        return;
    }

    char name[50],id[50],batch[50],activity[50];
    printf("enter the name :\n");
    gets(name);
    printf("enter the id :\n");
    gets(id);
    printf("enter the batch :\n");
    gets(batch);
    printf("enter the activity :\n");
    gets(activity);




    fprintf(fpt,"%s, %s, %s, %s\n", name, id, batch, activity);
    fprintf(fpp,"%s, %s, %s, %s\n", batch,activity,id, name);



    fclose(fpt);
    fclose(fpp);

}





void admin_work()
{
    system("cls");
    printf("\n\t\t NOW YOU CAN ADD STUDENT INFORMATION\n\n");
    printf("\n\n\t1. Add\n");
    printf("\n\n\t2. Go to Home\n");




    char op[1];
    printf("\n Enter your choice : \n");

    gets(op);

    if(op[0]=='1')
    {

       char another='y';
       while(another=='y')
       {
           add();
           printf("\n\t\t Your information is successfully added.\n");

           printf("\nWant to add of another record? \nThen press 'y' else 'n'.\n");


        another = getch();
        if(another=='n')
            admin_work();

       }

    }
    else if(op[0]=='2')
    {
        system("cls");
        first_menu();
    }


    else
    {


        printf("Invalid Option \n");
        exit(1);
    }
}


void wel_come(void)

{

    printf("\t\t\t\t\tWELCOME\n\t\t\t\t\t  TO\n");
    printf("\n\t\tINFORMATION SYSTEM OF STUDENT CO CURRICULAR ACTIVITIES\n");
    printf("\n\nPress any key to continue.......... \n");

    getch();
    system("cls");
}

void first_menu()
{
    system("cls");
    printf("\t\tGive choice as your current status\n\n");
    printf("\t1.Log in as admin\n");
    printf("\t2.Log in as user\n");
    printf("\t3.Exit\n");
    char choice[1];
    printf("\tEnter your choice:\n\t");
    gets(choice);

    if(choice[0]=='1')
        log_in_as_admin();
    else if(choice[0]=='2')
        user();
    else if(choice[0]=='3')
    {
        exit(1);

    }
    else
        printf("Invalid Choice.\n\n");
}



void log_in_as_admin()
{
    system("cls");
    printf("\n\tVARIFY YOU ARE A MEMBER OF ADMIN PANEL\n\n");

    char id[50];
    printf("\n\tEnter your id : ");
    gets(id);

    char k[50]="21047";
    char kk[50]="21051";

    if(strcmp(id,"21047") == 0)
    {

        printf("\n\tYOU ARE A MEMBER OF ADMIN PANEL\n");

        admin_work();
    }
    else if(strcmp(id,"21051") == 0)
    {
        printf("\n\tYOU ARE A MEMBER OF ADMIN PANEL\n");
        admin_work();
    }
    else
    {
        system("cls");
         printf("\n\tYOU ARE NOT A MEMBER OF ADMIN PANEL\n\n\tPlease try again......\n");


        log_in_as_admin();

     }

}





void user()
{
    login();
    if(ok==1)
        menu();

}
void check(int z)
{
    FILE *the_file=fopen("user1.CSV", "r");
    if(the_file==NULL)
    {
        perror("unable to open");
        exit(1);
    }
    int m=0;


    char gd1[50][50];
    char gd2[50][50];

    char line[500];
    int i=1,cnt=0;

    while(fgets(line,sizeof(line), the_file))
    {

        char *token;
        token=strtok(line, ",");
        int ok=0;

        int i=0;
        while(token!=NULL)
        {
            if(i==0)
            {
                l=token;
                token=strtok(NULL, ",");
                i=i+1;
            }
            if(i==1)
            {
                u=token;
                token=strtok(NULL, ",");
                i=i+1;
            }
            if(i==2)
            {
                t=token;
                token=strtok(NULL, ",");
                i=i+1;
            }
            if(i==3)
            {
                a=token;
                token=strtok(NULL, ",");
                i=i+1;
            }

        }
        if(m==z)
        {
            system("cls");
            printf("\n\t\tInformation of the user name : %s\n\n",l);
            printf("\nFull Name : %s\nID: %s\nBatch: %s\nActivity: %s\n\n\n",l,u,t,a);


            printf("\n\t1.Back to previous page \n");
            printf("\n\t2.Search again\n");
             printf("\n\tplese select a key : ");




            char cc[2];
            gets(cc);

            if(cc[0]=='1')
            {


            system("cls");
         rmenu();
            }

           else if(cc[0]=='2')
            {
            search_individually();

            system("cls");

            }



        }
        else if(m>z)break;
        else
        {
            m=m+1;
        }

    }


}




int search_individually(void)
{
    system("cls");
    printf("\n\t\t Give the student id you want to know the information ");

    FILE *the_file=fopen("user1.CSV", "r");
    if(the_file==NULL)
    {
        perror("unable to open");
        exit(1);
    }
    char password[30];


    printf("\n\n\tEnter the id: ");
    scanf("\t%s",&password);

    char gd1[50][50];
    char gd2[50][50];

    char line[200];
    int i=1,cnt=0,z=0;
    int ok=0;
    while(fgets(line,sizeof(line), the_file))
    {

        char *token;
        token=strtok(line, ",");

        char *r;
        char *h;
        while(token!=NULL)
        {

            if(i%2==1)
            {
                i=i+1;
                ok=0;
            }

            if(i%2==0)
            {
                if(strcmp(password,token) == 0)
                {

                    ok=1;
                    h=token;
                    i=i+1;
                }

            }

            token=strtok(NULL, ",");

            if(i>2)break;

        }

        if(ok==1)
        {
            check(z-1);
            }

        z=z+1;
    }
}



void see_batchwise()
{
    system("cls");
    FILE *the_file=fopen("user2.CSV", "r");
    if(the_file==NULL)
    {
        perror("unable to open");
        exit(1);
    }
    printf("\n\t You can select from these batches\n15\n16\n17\n18\n19\n");

    printf("Please Enter a Batch : \n");
    char batch[50];
    gets(batch);
    system("cls");
    printf("\t\tActivities are : \n\n\t\tCoding Skill\n\t\tFootball\n\t\tSinging\n\t\tPainting\n\t\tCricket\n\t\tReciting\n\t\tDancing\n\t\tContent Creating\n\t\tReading Books\n\n");
    printf("Please Enter an Activity : \n");
    char activity[50];
    gets(activity);

    printf("\n\n");
     system("cls");
    char line[450];
    int i=1,cnt=0;
    char *aa,*bb,*cc,*dd;
    //int z;
    printf("\t\tTHE INFORMATIONS ARE:\n\n");
    while(fgets(line,sizeof(line), the_file))
    {
        //z=z+1;
        char *token;
        token=strtok(line, ",");
        int ok=0;

        int i=0;
        while(token!=NULL)
        {
            if(i==0)
            {
                aa=token;

            }
            if(i==1)
            {

                bb=token;

            }
            if(i==2)
            {

                cc=token;

            }
            if(i==3)
            {

                dd=token;

            }

            token=strtok(NULL, ",");
            i=i+1;

        }


        if(strcmp(activity,bb)==0 && strcmp(batch,aa)==0)
        {

            printf("Name: %s\t",dd);
            //printf("\n");
            printf("ID: %s\t",cc);
            printf("Batch: %s\t",aa);
            printf("Activity: %s\t",bb);

            printf("\n\n");


        }

    }

}


void rmenu()
{

    char choice4[2];

    printf("\n\n\tplease enter your choice->\n\n");
    printf("\t1 : Search Individually.\n");

    printf("\t2 : See Batchwise.\n");
    printf("\t3 : Home.\n");


    printf("\n\tEnter your choice : \n\t");
    gets(choice4);
    if(choice4[0]=='1')
    {

       char another='y';
       while(another=='y')
       {
            search_individually();


           printf("\nWant to see of another student information? \nThen press 'y' else 'n'.\n");


        another = getch();
        if(another=='n')
            rmenu();

       }

    }
    else if(choice4[0]=='2')
    {
   char another='y';
       while(another=='y')
       {
            see_batchwise();


           printf("\nWant to see of another Batch Information? \nThen press 'y' else 'n'.\n");


        another = getch();
        if(another=='n')
        {
            system("cls");

            rmenu();

        }

       }




    }
    else if(choice4[0]=='3')
    {
        first_menu();

    }
    else
    {
        printf("\tInvalid choice\n");
    }
}

void login()
{
    system("cls");
    FILE *the_file=fopen("user1.CSV", "r");
    if(the_file==NULL)
    {
        perror("unable to open");
        exit(1);
    }


    char username[30];
    char password[30];
    printf("\tComplete Our Log In Process\n\n");

    printf("\tEnter your username: ");
    gets(username);

    printf("\n\tEnter your id: ");
    gets(password);

    char gd1[50][50];
    char gd2[50][50];

    char line[200];
    int cnt=0;

    while(fgets(line,sizeof(line), the_file))
    {

        char *token;
        token=strtok(line, ",");
        //
        char *r;
        char *h;
        int i=0;
        int ok=0,ok1=0;
        while(token!=NULL)
        {
                 if(i==0)
           {

                    if(strcmp(username,token)==0)ok=ok+1;


                    r=token;
                    i=i+1;
                    token=strtok(NULL, ",");



           }


          else if (i==1)
          {
                 if(strcmp(password,token)==0)ok=ok+1;

                    h=token;
                    i=i+1;
                    token=strtok(NULL, ",");

                }

                else{
                    token=strtok(NULL, ",");
                }

        }


       if(ok==2)
        {
            cnt=1;
            system("cls");
            printf("\n\n\tLOG IN SUCCESSFULL\n\n");


            rmenu();
            break;

        }



    }
    if(cnt==0)
    {


    system("cls");
    printf("\n\t\tplease try again....\n");
    login();
    }


}

 void menu() {

   }


void main(void)

{

    wel_come();
    first_menu();

}




