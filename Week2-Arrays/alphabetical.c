/* 
Wtite a program to check if an array of characters is in
alphabetical order.

Note: Assume the characters are all uppercase.
*/


#include <stdio.h>
#include "cs50.h"
#include <string.h>


int main(void)
{

 
    string phrase = get_string("Enter a phrase: ");
    int length = strlen(phrase);
    
    for (int i = 0; i < length - 1; i++)
    {
        if(phrase[i] > phrase[i + 1])
        {
            printf("Not in alphabetical order");
            return 0;
        }
    }
    printf("Alphabetical order");

}