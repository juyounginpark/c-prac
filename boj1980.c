#include <stdio.h>

int main() {
	int n, m, t;
	scanf("%d %d %d", &n, &m, &t);

	int big, small;
	big = (n > m ? n : m);
	small = (n > m ? m : n);

	int ham = t / big;
	int coke = t % big;
	ham += t % small;
	coke -= t % small;
	

	printf("%d %d", ham, coke);


}
