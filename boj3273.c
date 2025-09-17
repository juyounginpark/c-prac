#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

	int *buff = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &buff[i]);
    }
	
    int m;
    scanf("%d", &m);

    int res = 0;

    for(int i = 0; i < n - 1; i++) {
        if(buff[i] >= m) continue;
		for(int l = i + 1; l < n; l++) {
            if(buff[i] + buff[l] == m) {res++; break;}

        }
    }
    printf("%d\n", res);

}
