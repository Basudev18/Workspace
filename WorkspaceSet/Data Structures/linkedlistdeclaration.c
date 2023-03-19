#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
int main()
{
    struct node *head,*temp,*new;
    int size;
    printf("Enter total number of elements in the linked list:");
    scanf("%d",&size);
    head=NULL;
    for(int i=0;i<size;i++)
    {
      
       new=(struct node*) malloc(sizeof(struct node));
       printf("Enter data for linked list: ");
       scanf("%d",&new->data);
       new->next=0;
       if(head==0)
       {
        head=temp=new;
       }
       else
       {
        temp->next=new;
        temp=new;
       }
    }
    printf("The elements are: ");
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d\t",temp->data);
         
    }
}