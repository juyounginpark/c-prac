#include <stdio.h>
int arr[1000001];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	arr[1] = 1;
	for(int i = 2; i <= 1000000; i++) {
        for(int l = 2; l * i <= 1000000 && !arr[i]; l++) {
			arr[i*l] = 1;
		}
    }

	for(int i = n; i <= m; i++) {
		if(!arr[i])printf("%d\n",i);
	}	



}
