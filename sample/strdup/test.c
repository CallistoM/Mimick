#include <mimick.h>
#include <errno.h>
#include <stdio.h>
#include "random_minute_generator.h"
#include "fff.h"

DEFINE_FFF_GLOBALS
FAKE_VOID_FUNC(DISPLAY_init)
FAKE_VOID_FUNC(DISPLAY_tits)

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif

static mmk_stub t;


void RandomMinuteGenerator_Get_FAKE(void)
{
    DISPLAY_tits();
    printf("TEST value = %d\n", 1 );
}

int x[100];

int main(void)
{
    t = mmk_stub_create("RandomMinuteGenerator_Get@self", RandomMinuteGenerator_Get_FAKE, NULL);
    RandomMinuteGenerator_Get();
    RandomMinuteGenerator_Get1();
    printf("%d\n", DISPLAY_init_fake.call_count);
    printf("%d\n", DISPLAY_tits_fake.call_count);
    mmk_stub_destroy(t);
    RandomMinuteGenerator_Get();
    RandomMinuteGenerator_Get1();
    printf("%d\n", DISPLAY_init_fake.call_count);
    printf("%d\n", DISPLAY_tits_fake.call_count);
    return 0;
}
