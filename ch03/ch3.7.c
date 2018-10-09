#include <stdio.h>

void foo(void)
{
    int i;
    printf("%d\n", i);
    i = 777;
}


int main(void)
{
    foo();
    printf("hello\n");
    foo();
    return 0;
}