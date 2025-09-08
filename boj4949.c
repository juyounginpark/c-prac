#include <stdio.h>
#include <string.h>

char buffer[105];
char stack[105];  // 괄호 스택
int top;

char* f(char *buffer) {
    top = 0; // 스택 초기화

    for (int i = 0; buffer[i]; i++) {
        char c = buffer[i];

        if (c == '(' || c == '[') {
            stack[top++] = c; // push
        }
        else if (c == ')') {
            if (top == 0 || stack[top - 1] != '(') return "no";
            top--; // pop
        }
        else if (c == ']') {
            if (top == 0 || stack[top - 1] != '[') return "no";
            top--; // pop
        }
    }

    if (top == 0) return "yes"; // 다 짝 맞음
    else return "no";
}

int main() {
    while (1) {
        fgets(buffer, sizeof(buffer), stdin);

        if (buffer[0] == '.' && buffer[1] == '\n') break; // 종료 조건

        buffer[strcspn(buffer, "\n")] = '\0';

        puts(f(buffer));
    }
    return 0;
}
