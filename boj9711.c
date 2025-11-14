#include <stdio.h>

int main() {
	long long int dp[10000];
	int n;
	scanf("%d", &n);
	int a, b;
	for(int i = 1; i <= n; i++) {
	scanf("%d %d", &a, &b);
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i <= a; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%b;
	}
	printf("Case #%d: %lld\n",i, dp[a]%b);

	}

}
