#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char a[1001], b[1001], c[1001];

	scanf("%s\n%s\n%s", a, b, c);

	int A = stoi(A) + stoi(B) + stoi(C);
	strcat(a, b);
	int B = stoi(a) - stoi(b);
	printf("%d\n%d\n", A, B);
}
