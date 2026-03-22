#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <x86intrin.h>
int main() {
    int i, x;
    printf("Введите число: "); scanf("%d", &i);
    printf("%d", OnesInInt(i));
}
int OnesInInt(int i) {
    int result;
    result = ((i & 0xAAAAAAAA) >> 1) + (i & 0x55555555);
    result = ((result & 0xCCCCCCCC) >> 2) + (result & 0x33333333);
    result = ((result & 0xF0F0F0F0) >> 4) + (result & 0x0F0F0F0F);
    result = ((result & 0xFF00FF00) >> 8) + (result & 0x00FF00FF);
    result = ((result & 0xFFFF0000) >> 16) + (result & 0x0000FFFF);
    return result;
}