#include <stdio.h>
#include <string.h>

struct locate {
	int order, locate;
}arr[500001];
int main() {
	int n;
	scanf("%d", &n);
	
	char str[500001];
	char buffer[500001];
	int len = 0;
	for(int i = 0; i < n; i++) {
		scanf("%d", buffer);
		strcat(str, buffer);
		len += strlen(buffer) - 1;
		arr[i].order = len;
		

	}


}
