#include <stdio.h>
#include <stddef.h>

void func(void *pv)
{
    char *pchar = pv;
    *pchar = 'A';
}

int main(void)
{
    int *p = NULL;

    // *p = 0;

    // printf("%p\n", p);
    // printf("%d\n", *p);

    char c;
    func(&c);
    printf("%c\n", c);

    return 0;
}