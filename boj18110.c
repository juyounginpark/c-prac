#include <stdio.h>
#include <math.h>
int op[300001];
int n;

void max() {
	int max = -1;
	int index = 0;
	for(int i = 0; i < n; i++) {
		if(op[i] == 31) continue;
		if(max < op[i]) {
			max = op[i];
			index = i;
		}
	} 

	op[index] = 0;
}

void min() {
	int min = 31;
	int index = 0;
	for(int i = 0; i < n; i++) {
		if(op[i] == 0) continue;
		if(min > op[i]) {
			min = op[i];
			index = i;
		}
	}
	op[index] = 31;
}
void del(int n) {
	for(int i = 0; i < n; i++) {
		max();
		min();
	}
}

int main() {
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%d", &op[i]);
	}
	int level = 0;
	int r = round( n * 0.15 );
	del(r);

	float sum = 0;
	for(int i = 0; i < n; i++) {
		if(op[i] == 31) continue;
		sum += op[i];
	}

	printf("%.0f\n", round(sum/(n-(2*r))));
}
