#include <stdio.h>

int absolute_value(int x)
{
	if (x < 0) {
		return -x;
	} else if (x > 0) {
		return x;
	}

}

int main(void)
{
    int a = absolute_value(0);
    printf("%d", a);
}