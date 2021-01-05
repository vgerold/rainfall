# include <stdlib.h>
# include <string.h>
# include <stdio.h>

void n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void m()
{
	puts("Nope");
}

int main(int argc, char **argv)
{
	char *str1;
	void *ptr;

	str1 = (char*)malloc(64);
	ptr = (void**)malloc(4);

	*ptr = m;
	strcpy(s, argv[1]);

	ptr();
	return (0);
}