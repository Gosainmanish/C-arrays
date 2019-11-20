#include<stdio.h>
void main()
{
          int n,i,j,psum=0;
        int a[100],nsum=0;

          printf("\n enter the size of array:");
          scanf("%d",&n);

          printf("\n enter any +ve & -ve numbers :");

          for(i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
          }
          for(i=0;i<n;i++)
          {

                    if (a[i]>0)
                    psum=psum+a[i];

                    else if
                 (   nsum=nsum+a[i]);
          }


          printf("\n POSITIVE SUM = %d",psum);
          printf("\n NEGATIVE SUM = %d",nsum);
}
