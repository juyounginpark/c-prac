#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int dp;
}S;

int max(S *arr, int n) {
    int m = -1;
    for(int i = 0; i < n; i++) {
        if(m < arr[i].dp) m = arr[i].dp;
    }   
    return m;
}

int main() {
    int n;
    scanf("%d", &n);
    int *buffer = (int *)malloc(sizeof(int) * n);
    S *arr = (S *)malloc(sizeof(S) * n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i].num);
        arr[i].dp = 1;

    }

    for(int i = 0; i < n; i++) {
        for(int l = 0; l < i; l++) {
            if(arr[l].num < arr[i].num && arr[i].dp < arr[l].dp + 1) {
                arr[i].dp = arr[l].dp + 1;
            }
        }
    }
    


    printf("%d", max(arr, n));
    free(arr);    

}