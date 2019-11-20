#include<stdio.h>
void main()
{
          int a[100],i,big=0,n;
          printf("\n Enter the size of array:");
          scanf("%d",&n);
          printf("\n Enter any integer numbers :");
          for (i=0;i<n;i++)
          {
               scanf("%d",&a[i]);
               if (a[i]>big)
                    big=a[i];

          }
printf("\n LARGEST NUMBER : %d",big);
}
