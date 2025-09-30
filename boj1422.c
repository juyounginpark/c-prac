#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char str[12];
} S;

S con[1001];

int k, n;

int compare(const void *a, const void *b) {
    S *x = (S*)a;
    S *y = (S*)b;
    
    char xy[25], yx[25];
    strcpy(xy, x->str);
    strcat(xy, y->str);
    
    strcpy(yx, y->str);
    strcat(yx, x->str);
    return strcmp(yx, xy); 
}

int main() {

    scanf("%d %d", &k, &n);
    
    for(int i = 0; i < k; i++) {
        scanf("%s", con[i].str);
    }

    int stack = 0;
    for(int i = 0; i <= k; i++) {
        for(int l = 0; l < n - k ; l++) {
            strcpy(con[i + k + ++stack - 1].str, con[i].str);
        }
    }

    for(int i = 0 ; i < n + stack; i++) {
        printf("%s ", con[i].str);
    }

    qsort(con, n+stack , sizeof(S), compare);
    
    puts("");
    for(int i = 0 ; i < n + stack; i++) {
        printf("%s ", con[i].str);
    }

    char result[100000] = "";
    for(int i = 0; i < n; i++) {
        strcat(result, con[i].str);
    }
    
	int check = 0;
	for(int i = 0; result[i]; i++) {
		if(result[i] - '0') {
			check = 1;
			break;
		}
	}
	if(!check) {
		putchar('0');
		return 0;
	}
    printf("%s\n", result);
    
    return 0;
}