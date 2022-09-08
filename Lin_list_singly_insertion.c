#include <stdio.h>
#include <stdlib.h>
void at_beginning();
void at_end();
void at_position(int);
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *newnode;
struct node *temp;
;
int main()
{
    int choice = 1;
    head = 0;
    int count;
    int a;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        printf("Enter the data you want to insert : \n");
        scanf("%d", &newnode->data);

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (1/0)? : ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }

    printf("Which operation do you want to perform ?\n1.insert at the beginning\n2.insert at the end\n3.insert at specific position\n4.To Display the Linked list\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        at_beginning();
        display();
        break;
    case 2:
        at_end();
        display();
        break;
    case 3:
        at_position(count);
        display();
        break;
    case 4:
        display();
        break;
    }
    return 0;
}

void at_beginning()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at the beginning : \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    newnode->next = head;
    head = newnode;
}

void at_end()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insert at the end :\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void at_position(int count)
{
    int key, i = 1;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for insertion : \n");
    scanf("%d", &newnode->data);
    newnode->next = 0;

    printf("Enter where you want to insert the data: \n");
    scanf("%d", &key);
    while(temp!=NULL&&temp->data!=key)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else
    {
        printf("\n Notfound");
    }
   
}

void display()
{
    temp = head;
    printf("Your Linked list is : \n");
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}