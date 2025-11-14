#include<stdio.h>
#include<math.h>
void hanoi(int n, int start, int sub, int end) {
	if(n==1) {
		printf("%d %d\n", start, end);
		return;
	}


	hanoi(n-1, start, end, sub);
	printf("%d %d\n", start, end);
	hanoi(n-1, sub, start, end);
}
int main() {
	int n;
	scanf("%d", &n);
	
	printf("%.0f\n", pow(2,n) - 1);
	hanoi(n, 1, 2, 3);

}
