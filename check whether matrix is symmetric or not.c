#include<stdio.h>
void main()
{
          int a[10][10],i,j,r,c,transpose[10][10];
          printf("\n ENTER THE ROWS AND COLUMNS OF MATRIX :");
          scanf("%d%d",&r,&c);
          printf("\n ENTER THE ELEMENS OF MATRIX :- \n");
          for(i=0;i<r;i++)
          for(j=0;j<c;j++)
          {
                    printf("\n Enter element a[%d][%d]=",i+1,j+1);
                    scanf("%d",&a[i][j]);
          }
          //GIVEN MATRIX //
          printf("\n <<<<----GIVEN MATRIX ---->>>>");
           for(i=0;i<r;i++)
          {    printf("\n");
          for(j=0;j<c;j++)
                    {
                    printf("%d\t",a[i][j]);
                    }
          }
          printf("\n TRANSPOSE OF MATRIX ");
          for (i=0;i<r;i++)
          for (j=0;j<c;j++)
          {
           transpose[j][i]=a[i][j];
          }
           for(i=0;i<c;i++)
           {    printf("\n");
           for(j=0;j<r;j++)
                    {
                    printf("%d\t",transpose[i][j]);
                    }
          }
          for (i=0;i<r;i++)
          for (j=0;j<c;j++)
          {
                    if (a[i][j]!=transpose[i][j])
                    {
                              printf("\n matrix is not symmetric ");
                    }
          }
                   printf("\n matrix is symmetric ");
}
