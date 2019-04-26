#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string firstname = get_string("What is your first name? ");
    string lastname = get_string("What is your last name? ");
    printf("Hello Mr/Ms %s, %s\n", lastname, firstname);



}

