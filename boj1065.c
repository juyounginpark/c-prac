#include <stdio.h>

int f(char* n) {
	
	if(!n[1]) return 1;

	int v = (n[1] - n[0]);
	for(int i = 1; n[i]; i++) {
		if(v != n[i] - n[i-1]) return 0;
	}
	return 1;
}

int main(){
	int sum = 0;

	int n;
	scanf("%d", &n);

	char str[11];
	for(int i = 1; i <= n; i++) {
		sprintf(str, "%d", i);
		sum += f(str);
	}
	printf("%d\n", sum);
}
