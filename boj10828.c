#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100
typedef struct {
    int key;

}element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element)
void stackFull();
element pop();
void stackEmpty();
int main() {
    int n;
    scanf("%d", &n);
    
    element buffer;
    char command[100];
    while (n--) {
        scanf("%s", command);
        if (!strcmp(command, "push")) {
            scanf("%d", &buffer.key);
            push(buffer);
        }
        if (!strcmp(command, "pop")) {
            buffer = pop();
            printf("%d\n", buffer.key);
        }
    }
}

void push(element item) {
    if(top >= MAX_STACK_SIZE)
        stackFull();
    
}

element pop()
{
    if (top == -1)
        return stackEmpty();
    return stack[top--];
}

void stackFull()
{
    fprintf(stderr, "Stack is full, cannot add element");
    exit(EXIT_FAILURE);
}

void stackEmpty() 
{
    
}
