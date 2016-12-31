#include <cs50.h>
#include <stdio.h>


void PrintInitials(string userInput);

int main(void)
{
    // UserInput
    printf("Enter your name. Your Initials will be returuned. EX: Darshil Patel = D.P\n");
     string userInput = GetString();

    PrintInitials(userInput);
}

void PrintInitials(string userInput){
    printf("%s Your Intials: \n", userInput );
}

