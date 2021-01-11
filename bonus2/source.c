# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int language = 0;

void greetuser(char *msg)
{
    char buf[72];

    if (language == 1)
        strcpy(buf, "Hyvää päivää ");
    if (language == 2)
        strcpy(buf, "Goedemiddag! ");
    if (language == 0)
        strcpy(buf, "Hello ");
    strcat(buf, msg);
    puts(buf);
}

int main(int argc, char **argv)
{
    char buf[72];
    if (argc != 3)
        return 1;
    bzero(buf, 19);
    strncpy(buf, argv[1], 40);
    strncpy(buf+40, argv[2],32);

    char *lang = getenv("LANG");

    if (!(memcmp(lang, "fi", 2)))
        language = 1;
    else if (!(memcmp(lang, "nl", 2)))
        language = 2;
    greetuser(buf);
    return 0;
}