#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EVEN_MASK = strtoi("1010101010101010101010101010101010101010")
#define EVEN_MASK = strtoi("0101010101010101010101010101010101010101") 
#include <x86intrin.h>
int main() {
    int x, y = 1, result;
    printf("Введите целое число: "); scanf("%d", &x);
    x = (x & EVEN_MASK);
    strtoi
    return EXIT_SUCCESS;
}