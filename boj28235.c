#include <stdio.h>
#include <string.h>

int main() {
	char str[10];
	scanf("%s", str);
	if(!strcmp(str, "SONGDO")) puts("HIGHSCHOOL");
	else if(!strcmp(str, "CODE")) puts("MASTER");
	else if(!strcmp(str, "2023")) puts("0611");
	else if(!strcmp(str, "ALGORITHM")) puts("CONTEST");


}
