# include <stdio.h>

int main() {
    int find= -2147483647; // int min
    int a = 0;

    while (1)
    {
        a = find * 4;
        if (a == 44)
            break ;
        ++find;
    }

    if (find <= 9)
        printf("find=%d; find*4=%d; find<=9=%s\n",find, find*4, "True");
    else
        printf("find=%d; find*4=%d; find<=9=%s\n",find, find*4, "False");

    return 0;
}