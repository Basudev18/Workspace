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
    int size,prime=0,c=0;
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
    for(temp=head;temp!=NULL;temp=temp->next)
    {
      for (int j=1; j<=(temp->data)/2;j++)
      {
        c=0;
        for(j=2;j<temp->data;j++)
        {
          if(temp->data%j==0)
          {
              c=1;
          }
        }
        if(c==0)
        {
          prime+=temp->data;
        }
      }
    }
    printf("Sum of prime no.s=%d",prime);
}
