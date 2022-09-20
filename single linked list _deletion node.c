#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void Insert(int data, int n){
    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
      temp1->data=data;
      temp1->next = NULL;
    if (n == 1)
    {
        temp1->next=head;
        head = temp1;
        return;
    }
    struct node* temp2 = head;
    for (int i = 0; i < n-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void print(){
    struct node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Delete (int n){
    struct node* temp1=head;
    if (n==1)
    {
        head = temp1->next;
        free (temp1);
        return;}
        int i;
        for ( i = 0; i < n-2; i++)
        {
            temp1 = temp1 -> next;
            struct node* temp2=temp1->next;
            temp1->next=temp2->next;
            free(temp2);
        }
    
}
int main(){
head = NULL;
Insert (2,1);
Insert(4,2);
Insert(6,2);
Insert(5,3);
print();
int  n;
printf("Enter a position to delete\n");
scanf("%d",&n);
Delete(n);
print();
return 0;
}
