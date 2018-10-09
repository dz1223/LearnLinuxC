#include <stdio.h>

void newline(void)
{
    printf("\n");
}

void threeline(void)
{
    newline();
    newline();
    newline();
}

int main(void)
{
    printf("First line. \n");
    threeline();
    printf("Second line. \n");
    return 0;
}