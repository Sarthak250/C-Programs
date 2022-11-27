#include <stdio.h>
#include <math.h>

 float determinant(float a[20][20],float k)
 {
     float s=1,det,b[20][20];
     int i,j,m,n,c;
     if(k == 1)
     {
         return a[0][0];
     }
     else
     {
         det=0;
         for(c=0;c<k;c++)
         {
             m=0;
             n=0;
             for(i=0;i<k;i++)
             {
                 for(j=0;j<k;j++)
                 {
                     b[i][j] = 0;
                     if(i != 0 && j != c)
                     {
                         b[m][n] = a[i][j];
                         if(n < (k-2))
                         n++;
                         else
                         {
                            n=0;
                            m++;
                         }
                     }
                 }
             }
             det = det + s * (a[0][c]*determinant(b,k-1));
             s = -1*s;
         }
     }
     return (det);
 }
 void cofactor(float num[20][20],float f)
 {
    float b[20][20],fac[20][20];
    int p,q,m,n,i,j;
     for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }
 }
    transpose(num,fac,f);
 }
void transpose(float num[20][20], float fac[20][20], float r)
{
  int i, j;
  float b[20][20], inverse[20][20], d;
 
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[i][j] = fac[j][i];
        }
    }
    
  d = determinant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = b[i][j] / d;
        }
    }
    
   printf("\nThe inverse of matrix: \n");
   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%f", inverse[i][j]);
        }
    printf("\n");
     }
}
 int main()
 {
     float a[20][20],n,d;
     int i,j;
     printf("Enter the order of the matrix:\n");
     scanf("%f",&n);
     printf("Enter the elements of the matrix:\n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             printf("\nEnter the element a%d%d  ",i+1,j+1);
             scanf("%f",&a[i][j]);
         }
     }
     d = determinant(a,n);
     if(d == 0)
     {
         printf("Since the determinant of the matrix is zero, therefore inverse is not possible");
     }
     else
     cofactor(a,n);

     return 0;
 }