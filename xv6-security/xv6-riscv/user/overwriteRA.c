#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
    char buffer[128];

    memset(buffer, 'A', sizeof(buffer));

    // Account information
    char account[] = "John Smith\n100\n123456\n87654321\n";

    // Copy account information into the buffer
    memmove(buffer, account, sizeof(account) - 1);

    // Send bytes to standard output
    write(1, buffer, sizeof(account) - 1);

    exit(0);
}