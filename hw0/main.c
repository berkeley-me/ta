#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit limss, limpro, limmfd;
    getrlimit(RLIMIT_STACK, &limss);
    getrlimit(RLIMIT_NPROC, &limpro);
    getrlimit(RLIMIT_NOFILE, &limmfd);
    printf("stack size: %ld (hard limit: %ld)\n", (long int)limss.rlim_cur, (long int)limss.rlim_max);
    printf("process limit: %ld (hard limit: %ld)\n", (long int)limpro.rlim_cur, (long int)limpro.rlim_max);
    printf("max file descriptors: %ld (hard limit: %ld)\n", (long int)limmfd.rlim_cur, (long int)limmfd.rlim_max);
    return 0;
}
