# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int main(int argc, char **argv)
{
    FILE *file;
    char buf[123];

    file = fopen("/home/user/end/.pass", "r");
    memset(buf,0,123);
    if ((!file) || (argc != 2))
        return (-1);
    fread(buf, 1, 66, file);
    buf[65] = 0;
    buf[atoi(argv[1])] = 0;
    fread(buf+66, 1, 61, file);
    fclose(file);

    if (!(strcmp(buf, argv[1])))
        execl("/bin/sh", "sh", NULL);
    else
        puts(buf + 66);
    return 0;
}