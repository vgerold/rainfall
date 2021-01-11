#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int res;
	char buffer[40];
	
	int num = atoi(argv[1]);
	if (num <= 9) 
	{
		memcpy(buffer, *(void**)(argv + 8), num * 4);
		if (num == 0x574f4c46) 
			execl("/bin/sh", "sh", 0);
		res = 0;
	}
	else {
		res = 1;
	}
	
	return (res);
}
