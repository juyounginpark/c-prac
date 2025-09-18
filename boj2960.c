#include<stdio.h>
int arr[1001];
int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int cnt = 0;
	for(int i = 2; i <= n; i++) {
		if(!arr[i]) {
			for(int l = 1; l * i <= n; l++) {
				if(arr[i*l]) continue;
				arr[i*l] = 1;
				if(++cnt == k) printf("%d\n", i*l);
			}
		}
    }
}
