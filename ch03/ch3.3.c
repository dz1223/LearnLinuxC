// #include <stdio.h>

// 在程序开头没有写#include <stdio.h>，但是main()中的printf("hello\n");还是通过了编译而且运行正确，为什么？
// https://segmentfault.com/q/1010000000590441
void print_time(int hour, int minute)
{
    printf("%d:%d\n", hour, minute);
}

int main(void) 
{
    print_time(23, 59);
    return 0;
}