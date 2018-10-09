#include <stdio.h>

#define STR(s) # s

int main(void)
{
    printf("%s", STR(hello   world));

    return 0;
}