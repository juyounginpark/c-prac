#include <stdio.h>
#define L 1
#define R 2

int main() {
    char S[51];
    scanf("%s", S);

    int stack[51], top = 0;
    int sum = 0;
    for(int i = 0; S[i]; i++) {
        if(S[i] == '(') {
            stack[top++] = L;
            sum++;
        }
        else {
            if(stack[top-1] == L) {
                stack[--top] = 0;
                sum--;
                continue;
            }
            stack[top++] = R;
            sum++;
        }
    }
    
    printf("%d\n", sum);
}