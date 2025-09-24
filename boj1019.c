#include <stdio.h>
#include <string.h>
char a[12];
char temp[12];
char b[12];
int bcur;
int blen = 1;
int nums[10];
void add();
void carry();
void count();
int main() {
	scanf("%s", a);
	int alen = strlen(a);
	for(int i = 0; a[i]; i++) temp[alen-1-i] = a[i];
	strcpy(a, temp);
	puts(a);
	for(int i = 0; i < 120; i++) {
		if(blen == alen) {
			if(!strcmp(a, b)) break;
		}
		add();
	}
	for(int i = 0; i <= 9; i++) printf("%d ", nums[i]);
	puts("");
}

void count() {
	for(int i = 0; i < blen; i++) nums[b[i]-'0']++;
}
void add() {
	if(b[bcur] != '9') {
		if(b[bcur] == 0) b[bcur] += '0';
		b[bcur]++;
	}
	else {
		carry();
	}
	count();
}

void carry() {
	b[bcur++] = '0';
	if(b[bcur] == 0) {
		b[bcur] = '1';
		bcur = 0;
		blen++;
		return;
	}
	else {
		if(b[bcur] == '9') return carry();
		b[bcur]++;
		bcur = 0;
		return;
	}
}

