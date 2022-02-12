#include"header.h"
#include"unity_internals.h"
#include"unity.h"
#include"main.c"


void setup()
{

}

void tearDown()
{

}
void test_tst name()
{
    
}
int test_main()
{
    /* Initilize tje unity test frame work*/
    UNITY_BEGIN()

    RUN TEST(test)

    return UNITY_END();
}