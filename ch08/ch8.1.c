#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int a[N];

void gen_random(int upper_bound)
{
    int i;
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % upper_bound;
    }
}

int howmany(int value)
{
    int count = 0, i;
    for (i = 0; i < N; i++)
    {
        if (a[i] == value) 
        {
            ++count;
        }
    }

    return count;
}

void print_random()
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}

int main(void)
{
    int i;

    // 设置seed，防止生成的随机数每次都一样，该函数在time.h头文件中
    srand(time(NULL));

    gen_random(10);
    printf("value\thow many\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t%d\n", i, howmany(i));
    }

    return 0;
}