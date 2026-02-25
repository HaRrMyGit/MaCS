#include <stdio.h>
#define P  13
#define Q  100
#define R  15
#if P > Q + R || Q > P + R || R > Q + P
#error P, Q, M isnt a triangle
#endif
int main() {
    printf("true");
}