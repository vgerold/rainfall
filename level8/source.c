#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	char*	service;
	char*	auth;
	char	buffer[128];

	service = NULL;
	auth = NULL;
	buffer = NULL;
	while (1)
	{
		printf("%p, %p\n", auth, service);
		if (!(fgets(buffer, 64, stdin)))
			break;
		if (!(strncmp("auth ", buffer, 5)))
		{
			auth = malloc(4);
			bzero((void*)auth, 4);
			(void*)buffer = (long)0;
			if (strlen(buffer + 5) - 1 < 30)
				strcpy(auth, buffer + 5);
		}
		if (!(strncmp("reset", buffer, 5)))
			free(auth);
		if (!(strncmp("service", buffer, 6)))
			service = strdup(buffer + 7);
		if (!(strncmp("login", buffer, 5)))
		{
			if (auth[32])
				system("/bin/sh");
			else
				fwrite(&"Password:\n", 10, 1, stdout);
		}
	}
	return (0);
}
