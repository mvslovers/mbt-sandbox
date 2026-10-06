#include <string.h>
#include <mbtcheck.h>
#include "greet.h"

int main(void)
{
    char buf[16];

    CHECK(strcmp(greet(buf, sizeof buf, "MVS"), "Hello, MVS!") == 0, "greets MVS");
    CHECK(strlen(greet(buf, 8, "everybody")) == 7, "truncates to the buffer");
    return mbt_test_summary("TSTHELLO");
}
