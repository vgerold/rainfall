# include <stdio.h>
# include <string.h>
# include <stdlib.h>


void p()
{
	char str[76];
	void *check;

	fflush(stdout);
	gets(str);

	if ((0xb0000000 & check) == 0xb0000000)
	{
        printf("(%p)\n", check);
        _exit(1);
	}
    puts(str);
    strdup(str);
}


int main()
{
	p();
	return 0;
}