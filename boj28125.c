#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	

	char buffer[101];
	while(n--) { 
		scanf("%s", buffer);
		float num = 0;
		for(int i = 0;buffer[i]; i++) {
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
		if(strlen(buffer) < num * 2) {
			puts("I don't understand");
		}
		else {
			for(int i = 0;buffer[i]; i++) {
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
						if(buffer[i-1]=='\\' && buffer[i-2]=='\\') {
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

}
