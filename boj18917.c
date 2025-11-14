#include <stdio.h>


int main() {
    int m;
    scanf("%d", &m);


    int cmd;
    int buffer;
    int sum = 0;
    long long xor = 0;
    while(m--) {
        scanf("%d", &cmd);
        switch(cmd) {
            case 1:
                scanf("%d", &buffer);
                sum += buffer;
                xor ^= buffer;
            case 2:
                scanf("%d", &buffer);
                xor ^= buffer;
                sum -= buffer;
                break;
            case 3:
                printf("%d\n", sum);
                break;
            case 4:
                printf("%d\n", xor);
                break;
        }
    }
}