#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int num = 0;
	for(int i = 1; i <= n;) {
		for(int l = 0; l < m; l++) {
			printf("%d ", i + num++);
		}

	}
}
