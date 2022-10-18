#include <stdio.h>
int main(void)
{
    int a[7] = {10, 20, 30, 40, 50, 60, 70};
    for (int i = 0; i<7; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    int a2[2][2] = {{1,2}, {3, 1}};
    int a3[2][2] = {{1,1}, {0, 2}};
    int ans[2][2];

    for (int i=0; i<2; i++)
   {
       for (int j=0; j<2; j++)
       {
           for (int k=0; k<2; k++)
           {
               ans[i][j] += a2[i][k] * a3[k][j];
           }
       }
   }

   for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf ("%d ", ans [i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}