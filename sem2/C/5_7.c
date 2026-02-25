#include <stdio.h>
#define ASSERT(X) if (! (X)) {printf("exeption: "#X", on line %d in file %s\n", __LINE__, __FILE__); return 0;}
int main() {
    ASSERT(1 < 0);
    printf("Everything is fine");
    return 0;
}