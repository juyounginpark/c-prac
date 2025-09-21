#include <stdio.h>
char A[100001], B[100001], C[100002];
int len(char *s) {
	int res = 0;
	while(s[res++]);
	return res - 1;
}

void add(int alen, int blen, int clen, int i) {
	
	if(i-1>=clen) return;
	int sum = C[i];
	if(alen) {sum += A[--alen] - '0'; }
	if(blen) {sum += B[--blen] - '0'; }
	C[i] = sum % 10 +'0';
	C[i+1] = sum / 10;
	add(alen, blen, clen, ++i);
	
	putchar(C[i]);
	
	

}

int main() {	

	scanf("%s %s", A, B);
	int alen = len(A);
	int blen = len(B);
	int clen = (alen >= blen ? alen : blen) + 1;

	add(alen, blen, clen, 0);



    
}
