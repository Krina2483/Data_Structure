#include<stdio.h>
#define N 50

char s[N];
int top=-1;

void push(char x)
{
    if(top>=N-1)
    {
        printf("stack overflow\n");
        return;
    }
    top++;
    s[top]=x;
    return;
}

char pop()
{
    if (top==-1)
    {
        printf("stack underflow\n");
        return 0;
    }
    top--;
    return(s[top+1]);
}

int main()
{
    int b=0,j=0;
    char ip[20],next;

    printf("Enter string : ");
    scanf("%s",ip);

    next=ip[j];
    while (next!='\0')
    {
        if (next == 'a')
        {
            push(next);
        }
        else{
            b++;
        }
        j++;
        next=ip[j];
    }
    
    while (top!=-1)
    {
        pop();
        b--;
    }
    
    if(b!=0)
    {
        printf("Invalid string");
    }
    else{
        printf("valid string");
    }

    return 0;
}