#include <assert.h>
#include <stdio.h>
#include "task4.c"
int reverse_number(int n);

void test_reverse_number() {
    assert(reverse_number(1234) == 4321);
    assert(reverse_number(98765) == 56789);
    assert(reverse_number(1) == 1);
    assert(reverse_number(0) == 0);
    assert(reverse_number(1000) == 1);
    assert(reverse_number(505) == 505);
    assert(reverse_number(120) == 21);

    printf("All tests passed\n");
}

int main() {
    test_reverse_number();
    return 0;
}