#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *s) {
    int res = 0;
    while (s[res]) res++;
    return res;
}

void printReverse(char *C) {
    int length = len(C);
    
    int start = length - 1;
    while (start > 0 && C[start] == '0') {
        start--;
    }
    
    for (int i = start; i >= 0; i--) {
        putchar(C[i]);
    }
    putchar('\n');
}

char* add(char *A, char *B) {
    int alen = len(A);
    int blen = len(B);
    int clen = (alen >= blen ? alen : blen) + 2; 

    char *C = (char *)calloc(clen, sizeof(char));
    
    int i = 0, ai = 0, bi = 0;
    int carry = 0;
    
    while (ai < alen || bi < blen || carry) {
        int sum = carry;
        if (ai < alen) sum += A[ai++] - '0';
        if (bi < blen) sum += B[bi++] - '0';
        
        C[i++] = sum % 10 + '0';
        carry = sum / 10;
    }
    
    return C;
}

int main() {
    char *N = (char *)calloc(1000000, sizeof(char));
    scanf("%s", N);

    char *a = (char*)calloc(2, sizeof(char)); 
    strcpy(a, "0");
    char *b = (char*)calloc(2, sizeof(char)); 
    strcpy(b, "1");

    if (!strcmp(N, "0")) {
        printReverse(a);
        free(a); 
        free(b);
        return 0;
    }
    if (!strcmp(N, "1")) {
        printReverse(b);
        free(a); 
        free(b);
        return 0;
    }

    for (char *cnt = (char *)calloc(2, sizeof(char)); !strcmp(cnt,N); cnt = add(cnt, "1")) {
        char *c = add(a, b);
        free(a);  
        a = b;    
        b = c;  
    }

    printReverse(b);

    free(a);  
    free(b); 
    
    return 0;
}