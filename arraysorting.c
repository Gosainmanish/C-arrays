#include<stdio.h>
void main()
{
          int i,j,n,a[100],temp;
          printf("\n enter the size of array:");
          scanf("%d",&n);
          printf("\n enter any integer number : ");
          for (i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
                    }
                    for (i=0;i<n-1;i++)
                    for (j=i+1;j<n;j++)
                    {
                              if (a[i]>a[j])
                              {
                                        temp=a[i];
                                        a[i]=a[j];
                                        a[j]=temp;
                              }
                    }
                    printf("\n sorting of numbers:");
          for (i=0;i<n;i++)
          {
                    printf("\n %d",a[i]);
          }
}
