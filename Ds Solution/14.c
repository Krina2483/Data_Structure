#include<stdio.h>
#define N 50
char stack[N],POLISH[N],temp,*NEXT,str[20];
int rank=0,top=-1,j=0;
void PUSH(char x)
{
    if(top>100)
    {
        printf("Stack is overflow");
        return;
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
char POP()
{
    if(top==-1)
    {
        printf("Satck is underflow");
        return;
    }
    else
    {
        top--;
        return (stack[top+1]);
    }
}
int Gvalue()
{
    if(stack[top]=='+'||stack[top]=='-')
    {
        int a=2;
        return (a);
    }
    else if(stack[top]=='*'||stack[top]=='/')
    {
        int a=4;
        return (a);
    }
    else if(stack[top]=='^')
    {
        int a=5;
        return (a);
    }
    else if((stack[top]>='a'&&stack[top]<='z')||(stack[top]>='A'&&stack[top]<='Z'))
    {
        int a=8;
        return (a);
    }
    else if (stack[top]=='(')
    {
        int a=0;
        return (a);
    }
}
int Fvalue()
{
    if(*NEXT=='+'||*NEXT=='-')
    {
        int a=1;
        return (a);
    }
    else if(*NEXT=='*'||*NEXT=='/')
    {
        int a=3;
        return (a);
    }
    else if(*NEXT=='^')
    {
        int a=6;
        return (a);
    }
    else if((*NEXT>='a'&&*NEXT<='z')||(*NEXT>='A'&&*NEXT<='Z'))
    {
        int a=7;
        return (a);
    }
    else if (*NEXT=='(')
    {
        int a=9;
        return (a);
    }
    else if (*NEXT==')')
    {
        int a=0;
        return (a);
    }
}
int rankvalue()
{
    if(temp=='+'||temp=='-')
    {
        int a=-1;
        return (a);
    }
    else if(temp=='*'||temp=='/')
    {
        int a=-1;
        return (a);
    }
    else if(temp=='^')
    {
        int a=-1;
        return (a);
    }
    else if((temp>='a'&&temp<='z')||(temp>='A'&&temp<='Z'))
    {
        int a=1;
        return (a);
    }
    else
    {
        int a=0;
        return (0);
    }
}
void main()
{
    printf("Enter the string : ");
    scanf("%s",str);
    int z=0;

    for(int z=0;z<=N;z++)
    {
        if(str[z]==NULL)
           {
                str[z]=')';
                break;
           }
    }
    top=0;
    stack[top]='(';
    NEXT=str;
    while(*NEXT!=NULL)
    {
        if(top<0)
        {
            printf("\nINVALID ");
            return;
        }
        while(Gvalue()>Fvalue())
        {
            temp=POP();
            POLISH[j]=temp;
            j++;
            rank=rank+rankvalue();
            if(rank<1)
            {
                printf("\nINVALID  ");
            }
        }
        if(Gvalue()!=Fvalue())
        {
            PUSH(*NEXT);
        }
        else
        {
            POP();
        }
        NEXT++;
    }
    if(rank!=1)
    {
        printf("INVALID  ");
    }
    else
    {
        printf("%s",POLISH);
    }
}
