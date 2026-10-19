#include "kernel/types.h"
#include "user/user.h"



void hiddenMessage()
{
    printf("This function is never called so you should not see this message.\n");
    exit(1);
}

void greeting()
{
    char buffer[64];
    printf("Please enter your name\n");
    //assuming the programmer made a typo, which enables the buffer overflow
    gets(buffer,640);
    printf("Hello %s", buffer);
}

int main()
{
    greeting();
    printf("Have a nice day!\n");
    exit(0);
}