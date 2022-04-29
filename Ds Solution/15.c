#include<stdio.h>
#include<ctype.h>
#define N 20
int stack[N],top=-1;
void PUSH(int x)
{
    if(top>=N)
    {
        printf("\noveflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
int POP()
{
    if(top<=-1)
    {
        printf("\nunderflow");
    }
    else
    {
        top--;
        return (stack[top+1]);
    }
}
void main ()
{
    char str[20],*temp=str;
    int a,operand1,operand2,answer;
    printf("enter your string : ");
    scanf("%s",str);
    temp=str;

    while(*temp!='\0')
    {
        if(isdigit(*temp))
        {
            a=(*temp-48);
            PUSH(a);
        }
        else
        {
            operand2=POP();
            operand1=POP();
            if(*temp=='+')
            {
                answer=operand1+operand2;
            }
            else if (*temp=='-')
            {
                answer=operand1-operand2;
            }
            else if (*temp=='*')
            {
                answer=operand1*operand2;
            }
            else if (*temp=='/')
            {
                answer=operand1/operand2;
            }
            PUSH(answer);
        }
        temp++;
    }
    printf("answer = %d",stack[top]);
}