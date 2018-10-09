#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 会报 warning: format specifies type 'int' but the argument has type 'long' [-Wformat]
    // 虽然-2147483648这个数值能够用int型表示，但在C语言中却没法写出对应这个数值的int型常量，
    // C编译器会把它当成一个整数常量2147483648和一个负号运算符组成的表达式，而整数常量2147483648已经超过了int型的取值范围
    printf("%d\n", -2147483648);
    printf("%d\n", -2147483647 - 1);

    return EXIT_SUCCESS;
}