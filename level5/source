# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int m = 0;

int o(void)
{
	system("/bin/sh");
	_exit(1);
}

int n(void)
{
	char buf[520];

	fgets(buf, 512, stdin);
	printf(buf);
	exit(1);
}

int main(void)
{
	n();
	return (0);
}