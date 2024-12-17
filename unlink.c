#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
	int fd = open("tempFile", O_RDWR);
	unlink("tempFile");
	write(fd, "Hello", 5);
	printf("file unlinked\n");
	sleep(15);
	printf("done");
	exit(0);
}
