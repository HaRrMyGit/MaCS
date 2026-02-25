#define W(X, Y) #X#Y#X
#include <stdio.h>
int main() {
    printf(W(biba, boba));
}