#include<stdio.h>
#define NUM 246912
int arr[NUM+1];
int SUM(int n) {
	int res = 0;
	for(int i = n+1; i <= n*2; i++) {
		res += !(arr[i]);
	}
	return res;
}

int main() {
    arr[1] = 1;
    for(int i = 2; i <= NUM; i++) {
        for(int l = 2; l * i <= NUM && !arr[i]; l++) {
            arr[i*l] = 1;
        }
    }
	

	int buffer;
	while(1) {
		scanf("%d", &buffer);
		if(!buffer) break;
		printf("%d\n", SUM(buffer));

	}



}
