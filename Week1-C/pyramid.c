/*Print a right-aligned pyramid

#
##
###
####
#####

author: Cristian M.
*/


/*---------------------Includes--------------------*/
#include "cs50.h"
#include <stdio.h>



/*---------------------Prototype functios----------*/
void print_row(int height);



int main(void)
{
    
    int height = get_int("Height: ");
    print_row(height);
    
    return 0;
}


void print_row(int height)
{

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

