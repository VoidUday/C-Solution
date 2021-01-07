#include<stdio.h>
int main(){
    int a[10][10], transpose[10][10], r, c,i,j;
    printf("Enter Row and Col - ");
    scanf("%d,%d", &r,&c);
    for ( i = 0; i < r; i++)
    {

        for ( j = 0; j < c; j++)
        {
             printf("\nEnter element of matrix - ");
             scanf("%d", &a[i][j]);
        }
        printf("Your matrix is : ");
        for ( i = 0; i < r; i++)
           for ( j = 0; j < c; j++)
           {
               if (j==c-1)
               {
                  printf("\n");
               }
               for ( i = 0; i < r; i++)
               
                   for ( j = 0; j < c; j++)
                   {
                       transpose[j][i] = a[i][j];
                   }
                   printf("Here is your transpose");
                   for ( i = 0; i < r; i++)
                   
                      
                      for ( j = 0; j < c; j++)
                      {
                          if (j==r-1)
                          {
                              printf("\n");
                          }
                           
             } 
     }
    }
    return 0;
}