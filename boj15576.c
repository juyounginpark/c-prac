#include <stdio.h>
int len(char *s) {
	int res = 0;
	while(s[res++]);
	return res - 1;
}

void add(char *A, char *B, char *C) {
	int alen = len(A);
	int blen = len(B);
	int clen = (alen >= blen ? alen : blen) + 1;
	for(int i = 0; i < clen; i++) {
		int sum = C[i];
		if(alen) {sum += A[--alen] - '0'; }
		if(blen) {sum += B[--blen] - '0'; }

		
		C[i] = sum % 10 +'0';
		C[i+1] = sum / 10;
	}

}

void printReverse(char *C) {
	if(C[len(C)-1]-'0') putchar(C[len(C)-1]);
	for(int i = len(C) - 2; i >= 0; i--) {
		putchar(C[i]);
	}
}

char A[300001], B[300001], RES[10000000];
int main() {
	scanf("%s %s", A, B);
	add(A, "0", RES);
	add(A, "0", RES);
	printReverse(RES);



    
}

