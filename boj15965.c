#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d;
    scanf("%d", &d);

    int limit = (int)(d * (log(d) + log(log(d)))) + 10;

    char *isComposite = calloc(limit+1, sizeof(char));
    int count = 0, ans = -1;

    for (int i = 2; i <= limit; i++) {
        if (!isComposite[i]) {
            count++;
            if (count == d) {
                ans = i;
                break;
            }
            for (long long j = (long long)i*i; j <= limit; j += i) {
                isComposite[j] = 1;
            }
        }
    }

    printf("%d\n", ans);
    free(isComposite);
    return 0;
}

