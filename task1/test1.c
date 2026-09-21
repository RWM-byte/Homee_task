#include <stdio.h>
#include "task1.c"
#include <assert.h>
int ost(int a, int b, int n);

int main(void){
    assert(ost(5, 1, 2) == 2);
    assert(ost(10, 50, 3) == 50);
    assert(ost(1, 25, 4) == 0);
    printf("All tests passed!\n");
    
}