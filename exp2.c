#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat s;

    stat("sample.txt", &s);

    printf("File Size : %ld bytes\n", s.st_size);
    printf("Permissions : %o\n", s.st_mode & 0777);

    return 0;
}