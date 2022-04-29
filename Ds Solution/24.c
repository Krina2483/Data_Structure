#include<stdio.h>
#include<stdlib.h>
struct NODE *First=NULL;
struct NODE *Last=NULL;
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
struct NODE* createnode()
{
    struct NODE*NEW;
    NEW= (struct NODE*)malloc(sizeof(struct NODE));

    return NEW;

}
void INSERT()
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    struct NODE*NEW=createnode();
    NEW->INFO=x;
    NEW->LINK=NULL;
    if(First==NULL)
    {
        NEW->LINK=NEW;
        First=NEW;
        Last=NEW;
    }
    else
    {
        NEW->LINK=First;
        Last->LINK=NEW;
        First=NEW;
    }
    return;
}
void INSEND()
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    struct NODE*NEW=createnode();
    NEW->INFO=x;
    NEW->LINK=NULL;
    if(First==NULL)
    {
        NEW->LINK=NEW;
        First=NEW;
        Last=NEW;
    }
    else
    {
        NEW->LINK=First;
        Last->LINK=NEW;
        Last=NEW;
    }
    return;
}
void deletnodespecific()
{
    int x;
    printf("Please enter the value to delete : ");
    if(First==NULL)
    {
        printf("Link list is empty");
        return;
    }
    else
    {
        struct NODE*SAVE=First;
        struct NODE*PRED;
        while(SAVE->INFO!=x&&SAVE!=Last)
        {
            PRED=SAVE;
            SAVE=SAVE->LINK;
        }
        if(SAVE->INFO!=x)
        {
            printf("Node not found ");
            return;
        }
        if(SAVE->INFO==First)
        {
            First=First->LINK;
            Last->LINK=First;
        }
        else
        {
            PRED->LINK=SAVE->LINK;
            if(SAVE==Last)
            {
                Last=PRED;
            }
        }
        free(SAVE);
    }
    return;
}
void display()
{
    struct NODE *save=First;
    do
    {
        printf("%d\n",save->INFO);
        save=save->LINK;
    }while(save!=First);
}

void main()
{
    int x,a=0;

    while (1)
    {
        printf("Manue \n ");
        printf("1.insert at first \n 2.display\n 3.insert at last\n 4.delet node with specific value\n 5.exist ");
        printf("\n enter your choice : ");
        scanf("%d",&a);

        if(a==1)
        {
            INSERT();
        }
        else if(a==2)
        {
            display();
        }
        else if (a==3)
        {
            INSEND();
        }
        else if(a==4)
        {
            deletnodespecific();
        }
        else if(a==5)
        {
            exit(0);
        }
    }
}