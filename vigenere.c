#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


string k;
int key_turns;
string keyword;
string message;
int keylen;


int main(int argc, string argv[])
{
    //checks main argument, and if correct, makes it a string called k
    if (argc == 2) 
    {
        k = (argv[1]);
        keylen = strlen(k);
        for (int i = 0; i < keylen; i++)
            if(!isalpha(k[i]))
            {
            printf("Nope! Only chars please!\n");
            return 1;
            }
        // asks for a string to encypher
        message = GetString();
    }
    else
    {
        printf("This will only execute with an argument to be used as a keyword.  Alphabetical only.");
        return 1;
    }
    
    
    
    
    // counter used for keyword so as to be independant of i counter used for message
    int keycount = 0;
    
    // takes each letter, and rotates according to key
    for (int i = 0, n = strlen(message); i < n; i++)
    {
         if(isalpha(message[i]) && isupper(message[i]))
         {
             int m = message[i];
             // converts ASCII to alphabetical
             int letter = (m-65);
             
             int key = k[keycount%keylen];
                if (isupper(key))
                {
                    key_turns = (key-65);
                }
                else
                {
                    key_turns = (key-97);
                }
             // creates the wrapping around the alphabet effect
             int coded = (letter+key_turns)%26;
             // converts back to ASCII
             int final_letter = coded+65;
             // prints the ASCII by way of char
             printf("%c", toupper(final_letter));
             //adds 1 to keycount
             keycount++;  
         }
         else if (isalpha(message[i]) && islower(message[i]))
         {
            int m = message[i];
             // converts ASCII to alphabetical
             int letter = (m-97);
             
            int key = k[keycount%keylen];
                if (isupper(key))
                {
                    key_turns = (key-65);
                }
                else
                {
                    key_turns = (key-97);
                }
             // creates the wrapping around the alphabet effect
             int coded = (letter+key_turns)%26;
             // converts back to ASCII
             int final_letter = coded+97;
             // prints the ASCII by way of char
             printf("%c", tolower(final_letter));
             //adds 1 to keycount
             keycount++;  
         }
         else
         {
             printf("%c", message[i]);
         }
    }   
printf("\n");
return 0;
}