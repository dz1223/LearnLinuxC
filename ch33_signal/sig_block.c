#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void printsigset(const sigset_t *set)
{
	int i;
	for (i = 1; i < 32; i++)
		if (sigismember(set, i) == 1)
			putchar('1');
		else
			putchar('0');
	puts("");
}

int main(void)
{
	sigset_t s, p;
    printf("create sigset_t...\n");
    printsigset(&s);

	sigemptyset(&s);
    printf("sigemptyset...\n");
    printsigset(&s);

	sigaddset(&s, SIGINT);
    printf("sigaddset...\n");
    printsigset(&s);

    sigset_t o_sigset;
	sigprocmask(SIG_BLOCK, &s, &o_sigset);
    printf("sigprocmask...\n");
    printsigset(&o_sigset);

	while (1) {
		sigpending(&p);
		printsigset(&p);
		sleep(1);
	}
	return 0;
}