#include <stdio.h>
int ost(int a, int b, int n){
    int summ = ((a*100+b)*n)%100;
    return summ%100;
}