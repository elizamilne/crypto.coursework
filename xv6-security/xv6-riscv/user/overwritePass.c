
#include "kernel/types.h"
#include "user/user.h"

int main()
{
    char buf[] =
        "password\0"
        "AAAAAAA"
        "password\0"
        "\n"
        "Jane Doe\n"
        "600\n"
        "111111\n"
        "99999999\n"
        "Y\n";

    write(1, buf, sizeof(buf) - 1);

    exit(0);
}
