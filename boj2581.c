#include <stdio.h>

int f(int num) {
    if (num == 1) return 0;
    for(int i = 2; i < num; i++) if(!(num%i))return 0;
    return 1;
}


int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int min = 0;
    int sum = 0;
    for(int i = M; i <= N; i++) {
        if(f(i)) {
            if(!min) min = i;
            sum += i;
        }
    }
    if(!sum) {
        puts("-1");
        return 0;
    }
    printf("%d\n%d", sum, min);

}