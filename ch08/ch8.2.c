#include <stdio.h>

int main(void)
{
    char c = "Hello, world.\n"[0];
    printf("%c\n", c);

    // 相当于char str[10] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    // 剩余的4个元素自动初始化为0
    // char str[10] = "Hello";

    char str[] = "Hello, world.\n";
    int length = sizeof(str) / sizeof(char);
    printf("%d", length);
}