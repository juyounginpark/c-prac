#include <Stdio.h>

short int arr[2000000001];

int main() {
	int n, t, p;
	scanf("%d %d %d", &n, &t, &p);
	
	int buffer;
	while(n--) {
		scanf("%d", &buffer);
		arr[buffer]++;
	}

	for(int i = 2000000001; i >=0 && !p; i--) {
		

	}
}
