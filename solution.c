#include <stdio.h>


int task1(int a, int b, int n){
    int summ = ((a*100+b)*n)%100;
    return summ%100;
}

int task2(int n, int k) {
    return n % k;
}
  
int task3(int meters) {
    int kmeters = meters / 1000;
    return kmeters;
}