#include <stdio.h>
#include "process_driver.h"

int main(void)
{
    printf("ceedling github actions test...\n\r");
    int res = process_compute(1,1);
    printf("res: %i", res);
    return 0;
}