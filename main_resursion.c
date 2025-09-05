#include <stdio.h>
int a = 10;
int main() {
	if(!a) return 0;
	a--;
	putchar('*');
	main();
}
