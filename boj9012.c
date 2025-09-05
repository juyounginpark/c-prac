#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    for(int i=1;i<=n;i++)sum+=i;

    printf("%lld\n%lld\n",sum,sum*sum);

    sum = 0;

    for(int i=1;i<=n;i++)sum+=i*i*i;

    printf("%lld",sum);
}