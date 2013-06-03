#include "TVec.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_V(V)                              \
    do {                                        \
        for (i = 0; i < TVEC_SIZE(V); ++i) {    \
            printf("%d, ", TVEC_AT(V, i));      \
        }                                       \
        printf("\n");                           \
    } while(0)

static void
Test() {
    int *V, i;
    TVEC_NEW(V, 0);

    for (i = 0; i < 10; ++i) {
        TVEC_APPEND(V, 10 - i);
    }

    PRINT_V(V);

    TVEC_APPEND(V, 777);

    PRINT_V(V);

    TVEC_DELETE(V, 5);

    PRINT_V(V);

#define CMP(a,b) ((*a) < (*b))
    TVEC_SORT(V, CMP);

    PRINT_V(V);

    TVEC_FREE(V);
}

int
main(int argc, char *argv[]) {

    Test();

    return 0;
}
