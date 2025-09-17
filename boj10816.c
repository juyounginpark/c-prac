#include <stdio.h>
#define max 10000000
int arr[max + max + 1];
int main() {
	int n;
	scanf("%d", &n);
	
	int buffer;
	while(n--) {
		scanf("%d", &buffer);
		arr[max + buffer] ++;
	}	

	int m;
	scanf("%d", &m);
	while(m--) {
		scanf("%d", &buffer);
		printf("%d ", arr[max + buffer]);
	}
}
