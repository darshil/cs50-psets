#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int minNUM = 0;
    int maxNUM = 23;
    string hex = "#";
    
    printf("Enter the pyramid's height\n");
    int n = GetInt();
    
    if(n < minNUM || n  > maxNUM){ 
        printf("Enter the pyramid's height\n");
         n = GetInt();
    }
    if(n == 0 ){
      printf(""); 
        
    }

    int i, k, j;

    for(i=1; i<=n; i++)
    {
        for(k=0; k<=n-i - 1 ; k++)
        {
             printf(" ");
        }

       for(j=n; j>=k; j--)
       {
           printf("%s", hex);
       }

         printf("\n");
    }
}
