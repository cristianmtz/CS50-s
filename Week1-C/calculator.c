#include <stdio.h>
#include "cs50.h"

int add(int x, int y);

int main(void)
{

    int x = get_float("x: ");
    int y = get_float("y: ");

    //Type casting
    printf("The result is: %.2f\n", (float)x/ (float)y);

    return 0;
}


