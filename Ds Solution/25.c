#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int INFO;
    struct NODE*LPTR;
    struct NODE*RPTR;
};
struct NODE*L=NULL;
struct NODE*R=NULL;

struct NODE*createnode()
{
    struct NODE*NEW;
    NEW=(struct NODE*)malloc(sizeof(struct NODE));
    return;
}
void INSERT()
{
    struct NODE*NEW=createnode();
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    NEW->INFO=x;
    if (R==NULL)
    {

        NEW->LPTR=NULL;
        NEW->RPTR=NULL;
        L=R=NEW;
        return;
    }
    else
    {
        NEW->LPTR=NULL;
        NEW->RPTR=L;
        L->LPTR=NEW;
        L=NEW;
    }
}

void DELETESPECIFICNODE()
{
    int x;
    printf("Enter the value which you want to delete : ");
    scanf("%d",&x);
    struct NODE*OLD=L;
    if(R==NULL)
    {
        printf("UNDERFLOW");
        return;
    }
    else
    {
        while (OLD!=NULL)
        {
            if(OLD->INFO=x)
            {
                break;
            }
            OLD=OLD->RPTR;
        }
        if(L==R)
        {
            L=R=NULL;
        }
        if(OLD==R)
        {
            R=R->LPTR;
            R->RPTR=NULL;
        }
        if(OLD->INFO==x)
        {
            OLD->LPTR->RPTR=OLD->RPTR;
            OLD->RPTR->LPTR=OLD->LPTR;
        }
    }
}

void DISPLAY()
{
    struct NODE*SAVE=L;
    while (SAVE!=NULL)
    {
        printf("\n%d",SAVE->INFO);
        SAVE=SAVE->RPTR;
    }
}

void INSEND()
{
    struct NODE*NEW=createnode();
    int x;
    printf("Enter the values : ");
    scanf("%d",&x);
    NEW->INFO=x;

    if(R==NULL)
    {
        NEW->LPTR=NULL;
        NEW->RPTR=NULL;
        L=R=NULL;
        return;
    }
    else
    {
        NEW->RPTR=NULL;
        NEW->LPTR=R; 
        R->RPTR=NEW;
        R=NEW;  
    }
}

void main()
{
    int x,a=0;
    while (1)
    {
        printf("\nMenu:\n1.Insert at first\n2.Display\n3.Insert at end\n4.Delete node with specific value\n5.Exit");
        printf("Enter your choice : ");
        scanf("%d",&a);

        if(a==1)
        {
            INSERT();
        }
        else if(a==2)
        {
            DISPLAY();
        }
        else if (a==3)
        {
            INSEND();
        }
        else if(a==4)
        {
            DELETESPECIFICNODE();
        }
        else if(a==5)
        {
            exit(0);
        }
    }
}