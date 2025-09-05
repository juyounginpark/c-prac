#include <stdio.h>
#include <math.h>

// 가로 : 2045
// 세로 : 1023

int map[1024][2046];

int n; 

int MAX_X (int n) {
    int maxX = 1;
    for(int i=2;i<=n;i++) {
        maxX += 2*pow(2,i-1);
    }
    return maxX;
}

int MAX_Y (int n) {
    int maxY = 1;
    for(int i=2;i<=n;i++) {
        maxY += pow(2,i-1);
    }
    return maxY;
}

void STAR(int curr, int pX, int pY) {
    if(curr>n) return;

    int maxX = MAX_X(curr);
    int maxY = MAX_Y(curr);

    if(curr%2 == 0) {
        // 짝수
        map[pY][pX] = 1;
        for(int i = 1 ; i < maxY - 1 ; i++ ) {
            map[pY-i][pX+i] = 1;
            map[pY-i][pX-i] = 1;
        }
        pY -= MAX_Y(curr+1);
        pY +=1;
    }
    else {
        // 홀수
        pY += MAX_Y(curr+1);
        pY -=1;

    }
    STAR(++curr, pX, pY);
}


int main() {
    scanf("%d", &n);

    int maxX = MAX_X(n);
    
    int maxY = MAX_Y(n);
    
    
    STAR(0,(maxX-1)/2, (maxY-1)/2);

    for(int i=0;i<n;i++) {
        for (int l=0;l<n;l++) {
            putchar(map[i][l] ? '*' : ' ');
        }
        putchar('\n');
    }

}