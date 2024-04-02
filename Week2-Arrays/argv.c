/*
Wtite a program that prints each command-line 
argument given to the program
*/

#include <stdio.h>
#include "cs50.h"

int main(int argc, string argv[])
{

    for (int i = 1; i < argc; i++)
    {
        printf("argv[%i] is %s\n", i, argv[i]);
    }
    
    
    return 0;
}