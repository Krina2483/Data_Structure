#include<stdio.h>
#include<stdlib.h>
#define MAX 5 
 
int top=0 ,stack[MAX];
void push();
void pop();
void display();
void peep();
void change();

int main()
{
    int ch;
    
    while(1)
    {
        printf("\n\tStack Menu");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Peep\n5.change\n6.Exit");
        printf("\nEnter your choice(1-6):");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: peep();
            break;
            case 5: change();
            break;
            case 6: exit(0);
            default: printf("\nWrong Choice!!");
        }
    }
    return 0;
}
 
void push()
{
    int val;
    if(top==MAX)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
 
void pop()
{
    if(top==0)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}
 
void display()
{
    int i;
    if(top==0)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>0;--i)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void peep(){
    int i;
    printf("\n\tEnter value of element which you want to see : ");
    scanf("%d",&i);
    if(top-i+1<=0)
    {
        printf("stack underflow");
    }
    else{
        printf("\n\tValue: %d",stack[top-i+1]);
    }
}

void change(){
    int i,a;
    printf("\n\tEnter stack element number which you want to change : ");
    scanf("%d",&i);
    printf("\n\tEnter value of element which you want to change : ");
    scanf("%d",&a);
    stack[top-i+1]=a;
    if(top-i+1<=0)
    {
        printf("stack underflow");
    }
    else{
        for(i=top;i>0;--i)
        {
            printf("%d\n",stack[i]);
        }
    }
}