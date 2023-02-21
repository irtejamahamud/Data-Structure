#include<stdio.h>
#include<stdlib.h>

void beginsert(int);
void display();
void lastinsert();



struct node
{
    int data;
    struct node *next;
};

struct node *head;

void main ()
{
    int choice,item = 5;
    do
    {
        lastinsert(item);
        printf("\nPress 0 to insert more ?\n");
        scanf("%d",&choice);
    }while(choice == 0);

    display();

}

void display()
{
    struct node *ptr;  int count = 0;

    ptr = head;

    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting values . . . . .\n");
        while (ptr != NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
            count++;
        }
    }
    printf("\nCount = %d" ,count);
}

void beginsert(int item)
{
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));

        if(ptr == NULL)
        {
            printf("\nOVERFLOW\n");
        }
        else
        {
            scanf("%d", &ptr->data);
            ptr->next = head;
            head = ptr;
            printf("\nNode inserted\n");
        }


}

void lastinsert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");

        }
    }
}
