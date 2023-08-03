// How byte is stored in the computer memory check if it’s little Endian or big endian

#include <stdio.h>

int main()
{
    unsigned int x = 0x76513210;
    char *c = (char *)&x;
    printf("0x%x\n", *c);
    if (*c == 0x76)
        printf("Little Endain\n");
    else
        printf("Big Endain\n");
    return 0;
}