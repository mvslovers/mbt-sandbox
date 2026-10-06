#include <stdio.h>
#include "greet.h"

int main(void)
{
    char buf[64];

    puts(greet(buf, sizeof buf, "MVS"));
    return 0;
}
