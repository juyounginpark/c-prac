#include <stdio.h>

#define TRUE 1
#define FALSE 0
char stack[1000001];
int top = -1;

char string[1000001];

void PRINT(char *str) {
	while(top > -1) {
		putchar(str[top]);
		top--;
	}
}

int main() {
	fgets(string, sizeof(string), stdin);

	int isParen = FALSE;
	for(int i = 0; string[i]; i ++) {
		switch (string[i])
		{
		case '<':
			PRINT(stack);
			putchar('<');
			isParen = TRUE;
			break;
		case '>':
			putchar('>');
			isParen = FALSE;
			break;
		case ' ':
			if(isParen) putchar(' ');
			else {
				PRINT(stack);
				putchar(' ');
			}
			break;
		
		default:
			if(isParen) putchar(string[i]);
			else stack[++top] = string[i];
			break;
		}
	}
	top--;
	PRINT(stack);
}