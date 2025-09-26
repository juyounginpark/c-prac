#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char a[1001], b[1001], c[1001];

	scanf("%s\n%s\n%s", a, b, c);

	int A = atoi(a) + atoi(b) - atoi(c);
	strcat(a, b);
	int B = atoi(a) - atoi(c);
	printf("%d\n%d\n", A, B);
}
