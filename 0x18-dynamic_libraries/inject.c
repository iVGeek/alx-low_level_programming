#include <unistd.h>


int printf(__attribute__((unused))const char *format, ...)
{
	static int f = 0;
	if (!f)
		write(1, "9 8 10 24 75 - 9\n", 17);

	f = 1;
	return (0);
}


int puts(__attribute__((unused))const char *s)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
