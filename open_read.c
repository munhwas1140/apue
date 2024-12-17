#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int main() {   
    char buf[1024];
    int fd = open("hello.txt", O_RDONLY);

    int pid = fork();
    if (pid == 0) {
        int n = read(fd, buf,7);
        write(1, buf, n);
        write(1, ": in child\n", 12);
        return 0;
    } 
    wait(NULL);

    int n = read(fd, buf, sizeof(buf));
    write(1, buf, n);
    write(1, " : in parent\n", 13);
}
