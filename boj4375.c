#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    int n, i;
    long long int num = 1;
    long long int cnt = 1;
    while(scanf("%d", &n) == 1) {
        num = 1;
        cnt = 1;
        while(num % n != 0) {
            num *= 10;
            num++;
            cnt++;
        }

        printf("%lld", cnt);
        
    }
    
}