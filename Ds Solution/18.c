#include<stdio.h>
#define N 3
int front=-1,rear=-1,count=0,Q[N];

void QINSERT_REAR(int x)
{
    if(rear==(N-1))
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    if(front==rear)
    {
        printf("Overflow");
        return;
    }
    Q[rear]=x;
    if(front==-1)
    {
        front=0;
    }
    count++;
    return;
}
int QDELETE_FRONT()
{
    if(front==-1)
    {
        printf("UNDERFLOW");
        return 0;
    }
    int y=Q[front];
    if(front==rear)
    {
        front=rear=-1;
    }
     if (front==(N-1))
     {
         front=0;
     }
     else{
        front++;
     }
     count--;
    return y;
}
void display()
{
    printf("Queue is : ");
    int i=0;
    while(i<count)
    {
        printf("\n%d ",Q[i]);
        i++;
    }
}
void main ()
{
    int ch=0,insert;
    while(ch!=4)
    {
        printf("\nqueue manue : \n");
        printf("press 1 for insert \npress 2 for delete \npress 3 for dispaly\npress 4 exit the program ");
        printf("\nEnter your choise number ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value for insert : ");
            scanf("%d",&insert);
            QINSERT_REAR(insert);
            break;
        case 2 :
            QDELETE_FRONT();
            break;
        case 3 :
            display();
            break;
        case 4 :
            ch=4;
            break;

        }
    }
}
