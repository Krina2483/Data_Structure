#include <stdlib.h>
#include <stdio.h>
int F=0,R=0,size;
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
struct NODE *First;
struct NODE* createnode()
{
    struct NODE*NEW;
    NEW= (struct NODE*)malloc(sizeof(struct NODE));

    return NEW;
}
void QINSERT_REAR()
{
    if(R>size)
    {
        printf("\n\n overflow \n\n");
        return;
    }
    R++;

    if(F==0)
    {
        F=1;
    }
    int x;
    printf("\nEnter the value for insert :  ");
    scanf("%d",&x);
    struct NODE*NEW=createnode();
    NEW->INFO=x;
    NEW->LINK=NULL;
    if(First==NULL)
    {
        First=NEW;
    }
    else
    {
        struct NODE *SAVE=First;
        while(SAVE!=NULL)
        {
            if(SAVE->LINK==NULL)
            {
                SAVE->LINK=NEW;
                break;
            }
            SAVE=SAVE->LINK;
        }
    }
}
void  QDELETE_FRONT()
{
    if(F==0)
    {
        printf("\n\nUNDERFLOW\n\n");
        return;
    }
    if(F==R)
    {
        F=R=0;
    }
    else
    {
        F++;
    }
    struct NODE*X=First;
    First=First->LINK;
    free(X);
}
void display()
{
    struct NODE *SAVE=First;
    while(SAVE!=NULL)
    {
        printf("%d, ",SAVE->INFO);
        if(SAVE->LINK==NULL)
        {
            break;
        }
        SAVE=SAVE->LINK;
    }
}
void main()
{
    int press=0;
    printf("\nEnter the queue size : ");
    scanf("%d",&size);

    while(press!=4)
    {
        printf("MANUE FOR QUEUE ");
        printf("\n1.insert \n2.delete\n3.display\n4.exist");
        printf("\n please select your choice : ");
        scanf("%d",&press);
        if(press==1)
        {
            QINSERT_REAR();
        }
        else if(press==2)
        {
            QDELETE_FRONT();
        }
        else if(press==3)
        {
            display();
        }
        else if (press==4)
        {
            break;
        }
    }
}
