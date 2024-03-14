#include <stdio.h>
#include "cs50.h"



int main(void)
{

    string name = get_string("What is your name?: ");
    string phoneNumber = get_string("What is your phone number? ");
    int age = get_int("What is your age? ");


    printf("Conctact information:\n name: %s\n Number: %s\n Age: %i\n", name, phoneNumber, age);


    return 0;
}