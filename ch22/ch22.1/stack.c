/* stack.c */
#include "stack.h"

static item_t stack[512];
static int top = 0;

void push(item_t p)
{
	stack[top++] = p;
}

item_t pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}
/* stack.h */
#ifndef STACK_H
#define STACK_H

#include "main.h" /* provides definition for item_t */

extern void push(item_t);
extern item_t pop(void);
extern int is_empty(void);

#endif
