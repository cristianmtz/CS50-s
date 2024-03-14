/*Print a right-left-aligned pyramid

#
##
###
####
##### 

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
void pyramidLeft(int height);
void pyramidRight(int height);



int main(void)
{
    
    int height = get_int("Height: ");
    pyramidRight(height);
    
    return 0;
}


void pyramidLeft(int height)
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

void pyramidRight(int height)
{
    for (int i = 0; i < height; i++)
    {
       for (int j = height - i; j > 1; j--)
       {
            printf(" ");
       }
       for(int k = 0; k <= i; k++)
       {
            printf("#"); // print hashes.
       }
        printf("\n"); // go to next line.
       
    }

}

