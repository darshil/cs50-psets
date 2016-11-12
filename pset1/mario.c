#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int minNUM = 0;
    int maxNUM = 23;
    string hex = "#";
    
    printf("Enter the pyramid's height\n");
    int userInput = GetInt();
    
    if(userInput < minNUM || userInput  > maxNUM){ 
        printf("Enter the pyramid's height\n");
         userInput = GetInt();
    }
    if(userInput == 0 ){
      printf("\n");   
        
    }

        for(int a = userInput; a > 1 ; a--){

        printf("%s", hex );
        
   
        }
 
}
