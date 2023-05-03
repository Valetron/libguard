#include <stdlib.h>
#include <stdio.h>

#include "../header/defend.h"

void banLD()
{
    const char* ldPreloadVar = getenv("LD_PRELOAD");
    if (ldPreloadVar)
    {
        fprintf(stderr, "Can't start with LD_PRELOAD\n");
        exit(EXIT_FAILURE);
    }
}