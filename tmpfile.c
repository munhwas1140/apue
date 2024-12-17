#include <stdio.h>

#define MAXLINE 4096
/*
 * The standard technique often used by the tmpfile function 
 * is to create a unique pathname by calling tmpnam, then create 
 * the file, and immediately unlink(Section 4.15) it.
 */
int main() {
    char name[L_tmpnam], line[4096];
    FILE *fp;

    tmpnam(name); /* temp name */
    printf("%s\n", name);

    fp = tmpfile(); /* create temp file */
    fputs("one line of output\n", fp); /* write to temp file */
    rewind(fp); /* then read it back */
    fgets(line, sizeof(line), fp); 
    fputs(line, stdout); /* print the line we wrote */
}