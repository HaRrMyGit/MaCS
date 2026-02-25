#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BET 0.03
#define GOAL 1000000.0
int main() {
    float deposit, years;
    printf("Введите сумму вклада: "); scanf("%f", &deposit);
    years = (log(GOAL/deposit)/log(1.0+BET));
    if  (!((years - (int)years) == 0)) {
        printf("%d", (int)years + 1);
    } else {
        printf("%d", (int)years);
    }
    return 0;
}