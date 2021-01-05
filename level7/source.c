# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include < time.h >

int c = 0;

int m()
{
	int t;
	t = time(NULL);
	return printf("%s - %d\n", (char*)&c, t);
}

int main(int argc, char **argv)
{
	int *ptr;
	int *ptr2;
	int *ptr3;
	int *ptr4;

	ptr = malloc(8);
	*ptr = 1;
	ptr2 = malloc(8);
	ptr[1] = (int)ptr2;
	ptr3 = malloc(8);
	*ptr3 = 2;
	ptr4 = malloc(8);
	ptr3[1] = (int)ptr4;

	strcpy((char*)ptr[1], argv[1]);
	strcpy((char*)ptr3[1], argv[2]);
	FILE *file = fopen("/home/user/level8/.pass", "r");
	fgets((char*)&c, 68, file);
	puts("~~");
	return (0);
}