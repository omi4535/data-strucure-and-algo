#include<stdio.h>
int item;
int quee[];

int front =-1, rare=-1;
void insert(int max);
void delet();
void display();

int main()
{
    int a;
    int size;
    printf("enter a size of quee \n");
    scanf("%d",&size);
    do
    {
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            insert(size-1);
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("\nthanks for using \n");
            break;
        default:
            printf("enter a valid choice\n");
        }
    }
    while(a!=0);

}
void insert(int max)
{
    if(front == -1 && rare == -1)
    {
        front=0;
        rare = 0;
    }
    if(rare>max)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        printf("enter a item which you want to enter \n");
        scanf("%d",&item);
        quee[rare]=item;
        rare++;
    }

}

void delet()
{

   // printf("%d",front);
    if(front == -1 || front >= rare)
    {
        printf("quee is under flow\n");
    }
    else if(front == rare)
    {
        front =-1;
        rare =-1;
    }
    else
    {
        front ++;
        quee[front]==0;
        printf("your front element is delelted \n");
    }
}

void display()
{

    if(front == rare)
    {
        printf("quee is empty \n");
    }
    for(int i=front; i<rare; i++)
    {
        printf("%d ",quee[i]);
    }
    printf("\n");
}
