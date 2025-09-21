#include<stdio.h>
#include <string.h>
#define m 1003002
int arr[m];

int isP(char* str) {
    int len = len(str);
    for(int i = 0; i < len / 2; i++) {
        if(str[i]!=str[len-1-i]) return 0;
    }
    return 1;
}

int main() {

    arr[1] = 1;
    for(int i = 2; i <= m; i++) {
        for(int l = 2; l * i <= m && !arr[i]; l++) {
            arr[i*l] = 1;
        }
    }

	int n;
	scanf("%d", &n);
    
    for(int i = n; i <=m; i++ ) {
        if(!arr[i]) {
            char str[8];
            sprintf(str, "%d", i);
            if(isP(str)) {
                printf("%d", i);
                return 0;
            }
        }
    }


}