
struct complex_struct {
    double x, y;
} z1, z2;

// struct complex_struct z3, z4;


#include <stdio.h>

void test() {
    double x = 3.0;
    struct complex_struct z10 = { x, 4.0 };
    struct complex_struct z11 = { 3.0, };
    struct complex_struct z12 = { 0 };
}



int main(void)
{
    struct complex_struct 
    {
        double x, y; 
    } z;
    double x = 3.0;
    z.x = x;
    z.y = 4.0;
    if (z.y < 0)
    {
        printf("z=%f%fi\n", z.x, z.y);
    }
    else
    {
        printf("z=%f+%fi\n", z.x, z.y);
    }

    return 0;
}