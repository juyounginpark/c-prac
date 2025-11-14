#include <stdio.h>
#include <stdlib.h>
int* init(int *list, int N) {
    for(int i = 0; i < N; i++) list[i] = N-i;
    int *result = (int *)calloc(N, sizeof(int));
    return result;
}

void f(int* cards, int *result, int N) {
    
    int left = 0, right = N-1;
    int ward = 0;
    int top = 0;
    int cmd;
    for(int i = 0; i < N; i++) {
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 1:
            while(!left) left++;
            result[top++] = cards[left];
            cards[left++] = 0;
            ward = left;
            break;
        case 2:
            while(!ward) ward++;
            ward++;
            while(!ward) ward++;
            result[top++] = cards[ward];
            cards[ward] = 0;
            break;
        case 3:
            while(!right) right--;
            result[top++] = cards[right]; 
            cards[right--] = 0;
        }
    }


}
int main() {
    int N;
    scanf("%d", &N);
    int *arr = (int *)calloc(N, sizeof(int));
    int *result = init(arr ,N);

    f(arr, result, N);

    for(int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }



}