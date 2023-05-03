#include <stdio.h>
#include <string.h>

#include "../header/defend.h"

int main(int argc, char** argv)
{
    puts("This line will be printed WITH LD_PRELOAD");
    banLD();
    puts("This line will NOT be printed WITH LD_PRELOAD");

    return 0;
}
