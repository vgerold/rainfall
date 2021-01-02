# define _GNU_SOURCE
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int main(int argc, char **argv)

{
	int check;
	__uid_t p_uid;
	__gid_t p_gid;

	check = atoi(argv[1]);
	if (check == 423) {
		argv[0] = strdup("/bin/sh");
		argv[1] = 0;
		p_gid = getegid();
		p_uid = geteuid();
		setresgid(p_gid,p_gid,p_gid);
		setresuid(p_uid,p_uid,p_uid);
		execv("/bin/sh",argv);
	}
	else {
		fwrite("No !\n",1,5,stderr);
	}
	return 0;
}