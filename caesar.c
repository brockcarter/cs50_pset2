#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int k;


int main(int argc, string argv[])
{
    //checks main argument, and if correct, converts it into an integer called k
    if (argc == 2) 
    {
        k = atoi(argv[1]);
    }
    else
    {
        printf("No...just no.  That's not right.");
        return 1;
    }
    
    // asks for a string to encypher
    string message = GetString();
    
    
    // takes each letter, and rotates k positions
    for (int i = 0, n = strlen(message); i < n; i++)
    {
         if(isalpha(message[i]) && isupper(message[i]))
         {
             int c = message[i];
             // converts ASCII to alphabetical
             int e = (c-65);
             // creates the wrapping around the alphabet effect
             int f = (e+k)%26;
             // converts back to ASCII
             int g = f+65;
             // prints the ASCII by way of char
             printf("%c", toupper(g));
         }
         else if (isalpha(message[i]) && islower(message[i]))
         {
             int c = message[i];
             // converts ASCII to alphabetical
             int e = (c-97);
             // creates the wrapping around the alphabet effect
             int f = (e+k)%26;
             // converts back to ASCII
             int g = f+97;
             // prints the ASCII by way of char
             printf("%c", tolower(g));
         }
         else
         {
             printf("%c", message[i]);
         }
    }   
printf("\n");
return 0;
}