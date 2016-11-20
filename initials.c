#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main (void)
{
    string s = GetString();
    if (s != NULL)
    {
        char init1 = toupper(s[0]);
        printf("%c", init1);
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ' ')
            {
               printf("%c", toupper(s[i+1]));
            }
        }
        printf("\n");
    }
}