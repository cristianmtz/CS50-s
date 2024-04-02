#include <stdio.h>
#include <string.h>


#define SIZE 5

int main(void)
{
    int sequence[SIZE];

    sequence[0] = 1;
    printf("Sequence[0] = %i\n",sequence[0]);
    for(int i = 1; i < SIZE; i++)
    {
        sequence[i] = sequence[i - 1] * 2;
        printf("Sequence[%i] = %i\n", i , sequence[i]);
    }


    return 0;
}