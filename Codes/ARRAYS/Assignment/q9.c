#include<stdio.h>
int main()
{
     int n,i,j,c,a[20],t,num;
     printf("/How Many Numbers You Want\nTo Add in Array/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("\nEnter %d Numbers:\n\n",n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     printf("\nNumber\t Frequency of Occurrence");
     for(i=0;i<n;i=j)
     {
          num=a[i];
          c=1;
          for(j=i+1;j<n;j++)
          {
               if(a[j]!=num)
                    break;
               else
                    c++;
          }
          printf("\n%d\t\t%d",num,c);
     }
     return 0;
}