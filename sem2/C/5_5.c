#include <stdio.h>
#define N 7328743
int onesNum(int num, int acc) {
    int newNum = num >> 1;
    if (newNum == 0) {
        return acc + (num & 1);
    } else {
        onesNum(newNum, acc + (newNum & 1));
    }
}
int main() {
    int x = 10;
    printf("%d", onesNum(N, 0));
    return 0;
}