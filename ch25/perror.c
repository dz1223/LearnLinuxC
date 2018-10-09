#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("abcd", "r");
    if (fp == NULL)
    {
        printf("1. errno: %d\n", errno);
        perror("Open file abcd");
        FILE *fp = fopen("textfile", "w");
        printf("2. errno: %d\n", errno);
        exit(1);
    }

    return 0;
}