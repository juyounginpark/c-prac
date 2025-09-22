#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	
	char buffer[200];
	while(n--) {
		scanf("%s", buffer);
		int num = 0;
		for(int i = 0; buffer[i]; i++) {
			switch(buffer[i]) {
				case '@':
				case '[':
				case '!':
				case ';':
				case '^':
				case '0':
				case '7':
				case '\'':
					num++;
					break;
			}
		}
        int len = 0;
        for(int i = 0; buffer[i]; i++) {
            if(buffer[i]!='\\') len++;
        }
		if(len <= num * 2) {
			printf("I don't understand");
		}
		else {
			for(int i = 0; buffer[i]; i++) {
				switch(buffer[i]) {
					case '@':
						buffer[i] = 'a';
						break;
					case '[':
						buffer[i] = 'c';
						break;
					case '!':
						buffer[i] = 'i';
						break;
					case ';':
						buffer[i] = 'j';
						break;
					case '^':
						buffer[i] = 'n';
						break;
					case '0':
						buffer[i] = 'o';
						break;
					case '7':
						buffer[i] = 't';
						break;
					case '\'':
						if(i >= 2 && buffer[i-1]=='\\' && buffer[i-2]=='\\') {
							buffer[i] = 'w';
						}
						else {
							buffer[i] = 'v';
						}
						break;
				}

				if(buffer[i] != '\\')
					putchar(buffer[i]);
			}
		}
		puts("");
	}
	return 0;
}
