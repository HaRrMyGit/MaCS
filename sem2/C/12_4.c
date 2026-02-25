#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    scanf("%d", &x);
    printf("%d", sizeof((char)x[]));
    return 0;
}