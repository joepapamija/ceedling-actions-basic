#ifdef TEST

#include "unity.h"

#include "process_driver.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_process_driver_compute_positive_case(void)
{
    int res = process_compute(1,1);
    TEST_ASSERT_EQUAL(res, 2);
}

#endif // TEST
