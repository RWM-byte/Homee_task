#include <stdio.h>
#include <assert.h>

int task2(int n, int k);

int main(void) {
    assert(task2(10, 3) == 1);
    assert(task2(10, 5) == 0);
    assert(task2(3, 5) == 3);

    printf("All tests passed!\n");

    return 0;
}