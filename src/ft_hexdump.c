#include <stdio.h>
void ft_hexdump (const void * addr, const int len, int before_space) 
{
    int i;
    const unsigned char * charptr = (const unsigned char *)addr;
    for (i = 0; i < len; i++) {
        if ((i % before_space) == 0&& i != 0)
            printf(" ");
        printf ("%02x", charptr[i]);
    }
    printf("\n");
}
