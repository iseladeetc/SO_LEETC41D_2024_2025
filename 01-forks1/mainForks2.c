#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>

#define DEFAULT_ITER    1e9

void process_work (long niter) 
{
    for (long i = 0; i < niter; i++) {
        sqrt (rand ());
    }
}

int main ()
{
    printf("Parent process starts...\n");

    int retfork = fork();

    if (retfork == 0) {
        // novo processo
        printf("Child Process width pid = %d\n", getpid());
        process_work(DEFAULT_ITER);
        printf("processo terminating %d\n", getpid());
        return 0;
    }

    // Processo ? -> processo pai
    printf("My pid = %d\n", getpid());

    printf("process %d terminating\n",   
            getpid());
    return 0;
}
