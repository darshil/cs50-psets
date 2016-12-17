#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    printf("Enter the amount of money\n");
    float userInput =GetFloat();
    int totalValue = userInput * 100;
    int counter = 0;
     
     while(totalValue >= 25 ){
         totalValue = totalValue - 25;
         counter++;
     }
     while(totalValue >= 10 ){
         totalValue = totalValue - 10;
         counter++;
     }
     while(totalValue >= 5 ){
         totalValue = totalValue - 5;
         counter++;
     }
     while(totalValue >= 1 ){
         totalValue = totalValue - 1;
         counter++;
     }
     
     printf("%i\n", counter);
}

//check50 2015.fall.pset1.water water.c