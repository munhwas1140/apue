#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
	struct stat statbuf;
	prin	
	chmod("foo", (statbuf.st_mode & ~S_IXGRP) | S_ISGID);
	chmod("bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	return 0;
}
