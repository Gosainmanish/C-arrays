#include<stdio.h>
void main()
{
          int s=0,a[100],i,n;
          printf("\n enter the size of array :");
          scanf("%d",&n);
          printf("\n enter any integer numbers:");
          for (i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
                    s=s+a[i];
          }
          printf("SUM IS :%d",s);
          getch();
}
