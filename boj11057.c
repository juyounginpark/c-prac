#include <stdio.h>
#include <math.h>

int isOrmak(char* str) {
	for(int i = 1; str[i]; i++) {
		if(str[i - 1] > str[i]) return 0;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
    
	printf("%d\n", summing(n));

}
