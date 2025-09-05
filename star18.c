#include <stdio.h>
#include <math.h>

// 1, 5, 13, 29 - 가로
// 1, 2, 3, 4

// 1, 3, 7, 15 - 세로
// 1, 2, 3, 4

int map[1025][2047];
// 세로 : 1023, 가로 : 2045

int getX(int n) {
    return pow(2, n + 1) - 3;
}

int getY(int n) {
    return pow(2, n) - 1;
}

int foo(int x, int y, int n) {
    if (n == 1) { map[y][x] = 1; return 0; }

    int h = pow(2,n) - 1;

    if (n%2 != 0) { // 홀수 정삼각
        for (int i = 0; i < h; i++) {
            map[y + i][x - i] = 1;
            map[y + i][x + i] = 1;
        }
        for (int j = x - h + 1; j <= x + h - 1; j++)
            map[y + h - 1][j] = 1;
        foo(x, y + h / 2, n - 1);
    } else { // 짝수 역삼각
        for (int i = 0; i < h; i++) {
            int d = h - 1 - i;
            map[y + i][x - d] = 1;
            map[y + i][x + d] = 1;
        }
        for (int j = x - h + 1; j <= x + h - 1; j++)
            map[y][j] = 1;
        foo(x, y + 1, n - 1);
    }
    return 0;
}

// 홀수 정삼각
// 짝수 역삼각
int main() {
    int n;
    scanf("%d", &n);

    int sumX = getX(n);
    int sumY = getY(n);

    int stX = (sumX-1) / 2;
    int stY = 0;
    foo(stX, stY, n);

    if (n%2 == 0) {
        for (int i=0; i<sumY; i++) {
            for (int j=0; j<sumX-i; j++) {
                printf("%c", map[i][j] == 1 ? '*' : ' ');
            }
            printf("\n");
        }
    }else {
        for (int i=0; i<sumY; i++) {
            for (int j=0; j<sumX/2 + i + 1; j++) {
                printf("%c", map[i][j] == 1 ? '*' : ' ');
            }
            printf("\n");
        }
    }
}