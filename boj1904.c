#include <stdio.h>

int dp[1000001];
int main() {
	int n;
	scanf("%d", &n);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3; // 100 001 111
	dp[4] = 5; // 0000 1001 1100 111

	for(int i = 5; i <= n; i++) {
		dp[i] = (dp[i-1] + dp[i-2])%15746;
	}

	printf("%d\n", dp[n]);
}
