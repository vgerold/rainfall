# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <time.h>

char	c[68];

typedef struct t {
    int num;
    char *data;
} st;


int m()
{
	int t;
	t = time(NULL);
	return printf("%s - %d\n", c, t);
}

int main(int argc, char **argv)
{
    st *ptr1;
    st *ptr2;

    ptr1 = malloc(8);
    ptr1->num = 1;
    ptr1->data = (char*)malloc(8);
    ptr2 = malloc(8);
    ptr2->num = 2;
    ptr2->data = (char*)malloc(8);

	strcpy(ptr1->data, argv[1]);
	strcpy(ptr2->data, argv[2]);
	FILE *file = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, file);
	puts("~~");
	return (0);
}