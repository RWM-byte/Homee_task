#include <stdio.h>
#include <assert.h>
#include "task3.c"


int task3(int meters);

int main(void) {
    assert(task3(12500) == 12);
    assert(task3(34564) == 34);
    assert(task3(1999) == 1);
    
    printf("All testes passed!\n");
    return 0;
}