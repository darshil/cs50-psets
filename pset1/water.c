#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    // Takes in userInput
    printf("What is the length of your shower?\n");
    int userInput = GetInt();

    //Calculations
    int waterUsage = userInput * 192;
    int numBottles = waterUsage / 16;
    
    //Prints out the #of water bottles
    printf("%i bottles of water\n", numBottles);
    
}