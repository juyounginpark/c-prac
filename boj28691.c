#include <stdio.h>

char* f(char ch) {
	switch(ch) {
		case 'M':
			return "MatKor";	
			break;
		case 'W':
			return "WiCys";
			break;
		case 'C':
			return "Cykor";
			break;
		case 'A':
			return "AlKor";
			break;
		case '$':
			return "$clear";
			break;
	}
}

int main() {
	char c;
	scanf("%c", &c);
	puts(f(c));
}
