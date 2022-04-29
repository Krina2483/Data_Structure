#include<stdio.h>
int front=-1,rear=-1,N,Q[100];

int QINSERT_REAR(int x)
{
    if(rear>=100)
    {
        printf("Overflow");
        return 0;
    }
    rear++;
    Q[rear]=x;
    if(front==-1)
    {
        front=0;
    }
    return x;
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
    else
    {
        front++;
    }
    return y;
}
void display()
{
    printf("Queue is : ");
    int i=front;
    while(i<=rear)
    {
        printf("\nQ[%d]=%d",i,Q[i]);
        i++;
    }
}
int main ()
{
    int ch=0,insert;
    while(ch!=4)
    {
        printf("\nqueue manue : \n");
        printf("press 1 for insert \npress 2 for delete \npress 3 for dispaly ");
        printf("\nEnter your choise number : ");
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
    return 0;
}