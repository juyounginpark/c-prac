#include <stdio.h>
int tri[501][501];
int dp[501][501];

int bigger(int a, int b) {
	return (a >= b ? a : b);
}

int result(int n, int *arr) {
	int max = -1;
	for(int i = 0; i < n; i++) {
		if(arr[i] > max) max = arr[i];
	}

	return max;
}

int main(){
	int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
		for(int l = 0; l < i; l++) {
			scanf("%d", &tri[i][l]);
			if(i == 1) continue;
			if(l == 0) {
				tri[i][l] += tri[i-1][l];
			}
			else {
				tri[i][l] += bigger(tri[i-1][l], tri[i-1][l-1]);
			}
		}
	}
	
	printf("%d", result(n, tri[n]));
}

