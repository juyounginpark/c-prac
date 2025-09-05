#include <stdio.h>


char* f(int a, int b) {
    if (!(b%a)) return "factor";
    if (!(a%b)) return "multiple";
    return "neither";
}
int main() {
    int a, b;
    while(1) {
        scanf("%d  %d", &a, &b);
        if(!a && !b) break;
        puts(f(a, b));

    }
}