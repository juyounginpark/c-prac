#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int div;
    for(div = 1;;div++) {
        if(n-div <= 0) break;
        n -= div;
    }

    // a/b
    int a = (div%2?div-(n-1):n);
    int b = (div%2?n:div-(n-1));

    printf("%d/%d\n", a, b);
}