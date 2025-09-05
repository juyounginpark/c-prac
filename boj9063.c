#include <stdio.h>
#include <limits.h>
typedef struct{
    int min, max;
}BALL;
int main() {
    int n;
    scanf("%d", &n);
    
    
    BALL W, H;
    
    W.min = INT_MAX;
    W.max = INT_MIN;
    
    H.min = INT_MAX;
    H.max = INT_MIN;
    int w, h;
    while(n--) {
        scanf("%d %d", &w, &h);
        if(w > W.max) W.max = w;
        if(h > H.max) H.max = h;

        if(w < W.min) W.min = w;
        if(h < H.min) H.min = h;

    }
    printf("%d", (W.max - W.min) * (H.max - H.min));
}