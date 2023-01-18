#include <mimick.h>
#include <errno.h>
#include <stdio.h>
#include "random_minute_generator.h"

void RandomMinuteGenerator_Get_FAKE(void)
{
    printf("TEST value = %d\n", 1 );
}

int main(void)
{
    mmk_stub m = mmk_stub_create("RandomMinuteGenerator_Get@self", RandomMinuteGenerator_Get_FAKE, NULL);
    RandomMinuteGenerator_Get();
    mmk_stub_destroy(m);
    RandomMinuteGenerator_Get();
    return 0;
}