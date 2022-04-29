#include <stdio.h>
#include<stdlib.h>
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
struct NODE* INSERTORDERED(First)
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    struct NODE*NEW=createnode(x);
    NEW->INFO=x;
    if (First==NULL)
    {

        NEW->LINK=NULL;
        First=NEW;
        return First;
    }
    else
    {
        struct NODE *SAVE=First;
        while((SAVE->LINK!=NULL)&&(NEW->INFO>=SAVE->LINK->INFO))
        {
            SAVE=SAVE->LINK;
        }
        NEW->LINK=SAVE->LINK;
        SAVE->LINK=NEW;
    }
    return First;
}
void deletenodefirst()
{
    struct NODE*X=First;
    First=First->LINK;
    free(X);
}
void  deletenodelast()
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
void deletnodespecific()
{
    int z;
    printf("\nPlease enter the value which NODE deleted : ");

    scanf("%d",&z);

    if(First==NULL)
    {
        printf("Underflow");
    }
    else
    {
        struct NODE*PRED;
         struct NODE*SAVE=First;
        while(SAVE->LINK!=NULL&&SAVE->INFO!=z)
        {
            PRED=SAVE;
            SAVE=SAVE->LINK;
        }
        if(SAVE->INFO!=z)
        {
            printf("\nNode not found ");
            return;
        }
        if(z==First->INFO)
        {
            First=First->LINK;
        }
        else
        {
            PRED->LINK=SAVE->LINK;
        }
        free(SAVE);
    }
}
void display(struct NODE *First)
{
    struct NODE *save=First;
    while(save!=NULL)
    {
        printf("%d\n",save->INFO);
        save=save->LINK;
    }
}
void main()
{
    int x,a=0;
    while (1)
    {
        printf("Manue \n ");
        printf("1.insert at ordered list \n 2.display\n 3.delete at first\n 4.insert at last \n 5.delete node with specific value\n 6.exit ");
        printf("\n enter your choice : ");
        scanf("%d",&a);

        if(a==1)
        {
            First=INSERTORDERED(First);
        }
        else if(a==2)
        {
            display(First);
        }
        else if (a==3)
        {
            deletenodefirst();
        }

        else if(a==4)
        {
            deletenodelast();
        }
        else if(a==5)
        {

            deletnodespecific();
        }
        else if(a==6)
        {
            exit(0);
        }
    }
}
