#include<stdio.h>
#include <stdlib.h>
int top=0;
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
struct NODE *First=NULL;
struct NODE* createnode()
{
    struct NODE*NEW;
    NEW= (struct NODE*)malloc(sizeof(struct NODE));
    return NEW;
}
void PUSH()
{
    top++;
    int x;
    printf("Enter the value : ");
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
        struct NODE *save=First;

        while(save!=NULL)
        {
            if(save->LINK==NULL)
            {
                save->LINK=NEW;
                break;
            }
            save=save->LINK;
        }
    }
}
void POP()
{
    top--;
    if(First==NULL)
    {
        printf("UNDERFLOW");
    }
    else
    {
        struct NODE *delet=First;
        while(delet!=NULL)
        {
            if(delet->LINK->LINK==NULL)
            {
                free(delet->LINK);
                delet->LINK=NULL;
                break;
            }
            delet=delet->LINK;
        }
    }
}
void display(First)
{
    struct NODE *save=First;
    while(save!=NULL)
    {
        printf("%d",save->INFO);
        save=save->LINK;
    }
}
void main()
{
    int press=0,size;
    printf("Enter the stack size : ");
    scanf("%d",&size);

    while(press!=4)
    {
        printf("\nManue \n1.PUSH\n2.POP\n3.Display\n4.Exist");
        printf("\n enter your choice : ");
        scanf("%d",&press);
        if(press==1)
        {
            if(top>size)
            {
                printf("overflow");
            }
            else
            {
                PUSH();
            }
        }
        else if(press==2)
        {
            if(top<0)
            {
                printf("underflow");
            }
            else
            {
                POP();
            }
        }
        else if(press==3)
        {
            display(First);
        }
        else if (press==4)
        {
            break;
        }
    }
}