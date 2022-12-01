#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
    int *p = malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) address pointerd to by p: %p\n", getpid(), p);

    *p = 0;
    while (1) {
        *p++;
        printf("(%d) p: %d\n", getpid(), *p);
    }
    return 0;
}