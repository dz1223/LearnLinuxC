/* main.c */
#include <stdio.h>

int a, b = 1;

extern void push(char);
extern char pop(void);
extern int is_empty(void);

//void foo(void);

int main(void)
{
	push('a');
	push('b');
	push('c');
	
	while(!is_empty())
		putchar(pop());
	putchar('\n');

//	foo();
	return 0;
}
