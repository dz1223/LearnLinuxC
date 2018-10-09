#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3};
    int *pa = a;

    printf("%ld\n", (sizeof(int)));
    printf("%p\n", pa);
    printf("%p\n", ++pa);
    printf("%d\n", 2[a]);
    printf("%d\n", pa[-1]);
    
    pa = (a + 2);
    printf("%d\n", pa[-1]);
    return 0;
}