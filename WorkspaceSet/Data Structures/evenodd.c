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
    int size,even=0,odd=0;
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
        if(temp->data%2==0)
            even+=temp->data;
        else
            odd+=temp->data;   
    }
    printf("Sum of even no.s=%d \nSum of odd no.s=%d",even,odd);
}