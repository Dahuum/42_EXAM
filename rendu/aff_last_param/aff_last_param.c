#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("argc = %d\n", argc);
    write(1, argv[1], 13);
}