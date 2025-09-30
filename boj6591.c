#include <stdio.h>

int main() {
    int n, k;
    while (1) {
        scanf("%d %d", &n, &k);
        if (!(n + k)) break;

        if (k > n - k) k = n - k; 

        long long res = 1;
        for (int i = 1; i <= k; i++) {
            res = res * (n - i + 1) / i;
        }

        printf("%lld\n", res);
    }
    return 0;
}

