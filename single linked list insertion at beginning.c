#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    head = temp;
}
void print()
{
    struct node* temp = head;
    printf("List is:");
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    int n,i,x;
    printf("how many numbers?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the numbers:");
        scanf("%d",&x);
        insert(x);
        print();
    }
}