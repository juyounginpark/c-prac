#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int len, locate;
}M;

M MAP[500001];

char str[500001];
char buffer[500001];

void swap(M *a, M *b) {
	M temp = *a;
	*a = *b;
	*b = temp;
}
void printA(int n) {
	puts("");
	for(int i=0; i<n; i++) {
        for(int l=0; l<MAP[i].len;l++) {
            putchar(str[MAP[i].locate + l]);
        }
        putchar(' ');
    }
	puts("");
}
void main() {
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	for(int i=0; i<n; i++) {
		scanf("%s", buffer);
		MAP[i].len = strlen(buffer);
		MAP[i].locate = sum;
		sum += MAP[i].len;
		strcat(str, buffer);
	}
	int a, b;
	for(int i=0; i<n-1; i++) {
		scanf("%d %d", &a, &b);
		swap(&MAP[a-1], &MAP[b-1]);
		printA(n);	
	
	}
		
}
