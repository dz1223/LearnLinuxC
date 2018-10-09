#include <stdio.h>

struct complex_struct
{
    double x, y;
};

struct complex_struct add_complex(struct complex_struct z1, struct complex_struct z2)
{
    z1.x = z1.x + z2.x;
    z1.y = z1.y + z2.y;

    return z1;
}

int main(void)
{
    struct complex_struct z = { 3.0, 4.0 };
    z = add_complex(z, z);
    printf("%f, %f", z.x, z.y);
    return 0;
}