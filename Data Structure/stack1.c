#include<stdio.h>
#include<stdlib.h>
#define Size 10

int Top=-1, stack[Size];
void Push();
void Pop();
void display();

int main()
{
    int choice;

    while(1)
    {

        printf("\n\n1.Push the element\n2.Pop the element\n3.Display\n4.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: display();
                    break;
                    case 4: deserve();break;
            case 5: exit(0);

            default: printf("\nInvalid choice!!");
        }
    }
}

void Push()
{
    int x;

    if(Top>=Size-1)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nEnter element to be inserted in the stack:");
        scanf("%d",&x);
        Top=Top+1;
        stack[Top]=x;
    }
}

void Pop()
{
    if(Top==-1)
    {
        printf("\nEmpty");
    }
    else
    {
        printf("\nPopped element:  %d",stack[Top]);
        Top=Top-1;
    }
}

void display()
{


    if(Top==-1)
    {
        printf("\nEmpty!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(int i=Top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}
void deserve(){
int data;
data=stack[0];
for(int i=0;i<=Top;i++){
    stack[i]=stack[i+1];
}
 stack[Top]=data;
 display();
}
