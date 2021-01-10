# include <string.h>
# include <stdio.h>

void p(char *buf, char *message)
{
    char p_buf[4096];

    puts(message);
    read(0, p_buf, 4096);
    *strchr(p_buf, 10) = '\0';
    buf = strncpy(buf, p_buf, 20);
}

void pp(char *buf)
{
    char pp_buf1[20];
    char pp_buf2[28];
    unsigned long len;

    p(pp_buf1, " - ");
    p(pp_buf2, " - ");

    strcpy(buf, pp_buf1);
    len = strlen(buf);
    buf[len]= ' ';
    buf[len + 1]= 0;
    strcat(buf, pp_buf2);
}


int main(void)
{
    char buf[42];

    pp(buf);
    puts(buf);
    return (0);
}