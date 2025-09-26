#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int op[300001];
int n;

int compare(const void* a, const void* b) {
	int x = *(const int*)a;
    int y = *(const int*)b;
	return(x - y);
}

int main() {
	scanf("%d", &n);
	if(!n) {
		putchar('0');
		return 1;
	}
	for(int i = 0; i < n; i++) {
		scanf("%d", &op[i]);
	}
	qsort(op, n, sizeof(int), compare);

	int r = round(n * 0.15);
	float sum = 0;
	for(int i = r; i < n - r; i++) {
		sum += op[i];
	}
	printf("%.0f\n", round(sum/(n - r*2)));
}
