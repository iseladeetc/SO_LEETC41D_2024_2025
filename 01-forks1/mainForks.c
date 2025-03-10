#include <stdio.h>
#include <unistd.h>

int main ()
{
    printf("Parent process starts...\n");

    fork();

    printf("My pid = %d\n", getpid());

    printf("process %d terminating\n",   
            getpid());
    return 0;
}
