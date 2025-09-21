#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[101];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	while(1) {
		int add = 0;
		for(int i = 0; i < n - 1; i++) {
			if(arr[i] >= arr[i + 1]) {
				add++;
				sum++;
				arr[i]--;
			}
		}
		if(!add) break;
	}
	printf("%d\n", sum);
}
