#include <stdio.h>
#include "greet.h"

char *greet(char *buf, int len, const char *name)
{
    snprintf(buf, len, "Hello, %s!", name);
    return buf;
}
