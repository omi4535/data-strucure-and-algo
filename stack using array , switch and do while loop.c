#include<stdio.h>
int stack[100],top=-1,x,a;

void push()
{

    printf("enter a no\n");
    scanf("%d",&x);
    if(top == 99)
    {
        printf("STACK is over flow\n");
    }else
    {
        top++;
        stack[top]=x;

    }
}

void pop()
{
    if(top == -1)
    {
        printf("STACK is under flow\n");
    }else
    {
        printf("this is poped no %d\n",stack[top]);
        top--;
    }
}

void peek()
{
    printf("this is peel value %d\n",stack[top]);
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}


int main()
{
    do{
        printf("enter a choice which you want to do \n");
        printf(" 1 = push \n 2 = pop \n 3= peek \n 4 = display \n");

        scanf("%d",&a);
        switch(a)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("thanks for using \n");
                break;
            default:
                printf("enter a valid in put\n");
        }
    }while (a!=0);

    return 0;
}
