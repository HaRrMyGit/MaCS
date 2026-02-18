#define f(X) (X*X*X - X*X + 5*X - 3)
#define OUT(X) printf(#X)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = f(3);
    printf(a);
    _getchar_nolock();
}