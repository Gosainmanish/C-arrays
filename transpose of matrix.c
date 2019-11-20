#include<stdio.h>
void main()
{
          int a[10][10], transpose[10][10], r, c, i, j;
          printf("\n ENTER THE ROWS & COLUMNS OF MATRIX");
          scanf("%d%d",&r,&c);
          printf("\n ENTER THE ELEMENTS OF MATRIX :");
          for(i=0;i<r;i++)
          for(j=0;j<c;j++)
          {
                    printf("\n Enter element a[%d][%d]=",i+1,j+1);
                    scanf("%d",&a[i][j]);
          }
          printf("\n GIVEN MATRIX ---\n");
          for(i=0;i<r;i++)
          {
             for(j=0;j<c;j++)
              {
                    printf("%d\t",a[i][j]);
                    if (j == c-1)
                      printf("\n\n");
              }
          }

          for(i=0;i<r;i++)
          {
             for(j=0;j<c;j++)
              {
                    transpose[j][i]=a[i][j];
              }
          }
          printf("\n TRANSPOSE OF CIVEN MATRIX ----\n");
          for(i=0;i<c;i++)
           for(j=0;j<r;j++)
          {
                    printf("%d\t",transpose[i][j]);
                    if (j== r-1)
                    {
                               printf("\n\n");
                    }
          }

}

