#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    
    // Initialize Global Variables
    float userInput;
    int totalValue;
    int counter = 0;

    
    //check if input > 0
    do {
        printf("Enter the amount of money\n");
        userInput = GetFloat();
        totalValue = (round(userInput*100)/100) * 100; //rounds the input to the nearest decimal and converts it into cents
        

        if(userInput == 0||userInput <= 0)
            printf("Please enter a number greater than 0 \n:");
    } while(userInput <= 0);
    
    
    // sort 
    while(totalValue >= 25 ) {
        totalValue = totalValue - 25;
        counter++;
    }

    while(totalValue >= 10 ) {
        totalValue = totalValue - 10;
        counter++;
    }
    while(totalValue >= 5 ) {
        totalValue = totalValue - 5;
        counter++;
    }
    while(totalValue >= 1 ) {
        totalValue = totalValue - 1;
        counter++;
    }
    printf("%i\n", counter); // output

}