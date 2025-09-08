#include <stdio.h>

void main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if(m==1) {
	for(int i=1; i<=n; i++) printf("%d\n", i);
	return;
	}
	for(int i=1; i<=n; i++) {
		if(i+m>n+1) return;
		for(int j=1;i+j<=n;) {	
			printf("%d ", i);
			for(int p=1; p<m; p++) {
				printf("%d ", i+j);
				j++;
			}
			puts("");
		}
		

	}

}
