#include <stdio.h>
#include <stdlib.h>
#define CAPASITY 32
int main() {
    int boxes;
    printf("Введите число коробок: "); scanf("%d", &boxes);
    printf("%d\n", (boxes + CAPASITY - 1)/CAPASITY);
}