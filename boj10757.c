#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[10];
    scanf("%s", buffer);
    
    int len = strlen(buffer) - 1;
    char str[10];
    for(int i = 0; i <= len; i++) {
        str[i] = buffer[len - i];
    }
    str[len+1] = '\0';
    puts(str);

    
}