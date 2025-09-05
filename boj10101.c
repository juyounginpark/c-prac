#include <stdio.h>

char* f(int a, int b, int c) {
    if(a==b&&b==c&&c==a&&a==60) return "Equilateral";
    if(a+b+c==180&&(a==b||c==b||c==a)) return "Isosceles";
    if(a+b+c==180&&(a!=b&&b!=c&&c!=a)) return "Scalene";
    return "Error";
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    puts(f(a, b, c));


}