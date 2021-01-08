#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	char*	service;
	char*	auth;
	void*	buf;
	void*	edx;
	int	ecx;
	char*	str;

	service = NULL;
	auth = NULL;
	buffer = NULL;
	while (1)
	{
		printf("%p, %p\n", auth, service);
		if (!(fgets((char*)buffer, 0x80, stdin)))
			break;
		if(!(strncmp("auth ", (char*)buffer, 0x5)))
		{
			str = malloc(4)
		}

	}
	return (0);
}
