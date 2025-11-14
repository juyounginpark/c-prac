#include <stdio.h>
#include <stdlib.h>
#define W 'W'
#define B 'B'

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	char map[51][51];
	int min = 2147483647;

	for(int i = 0; i < n; i++) {
		scanf("%s", map[i]);
	}

	for(int k = 0; k <= 1; k++) {
		for(int i = 0; i <= n - 8; i++) {
			for(int l = 0; l <= m - 8; l++) {

				char kan = (k ? B : W);
				char notkan = (k ? W : B);
				int sum = 0;
				for(int sero = i; sero < i+8; sero++) {
					for(int garo = l; garo < l+8; garo++) {
						if((garo-l) % 2 == 0) {
							if(map[sero][garo] != kan)sum++;
						}
						else {
							if(map[sero][garo] != notkan)sum++;
						}
					}
					kan = (kan == B ? W : B);
					notkan = (notkan == B ? W : B);
				}

				if(sum < min) min = sum;
			}
		}
	}
	

	printf("%d", min);


}
