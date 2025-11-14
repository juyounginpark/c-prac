#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int x, y;
}XY;


XY mapping = {0, 0};
int main() {
	int n;
	int findnum;
	scanf("%d" ,&n);
	scanf("%d", &findnum);
	int **map = malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++) {
		*(map+i) = (int *)calloc(n, sizeof(int));
	} 
	
	int num = n * n;
	int len = n;
	
	while (num > 0) {
		map[mapping.y++][mapping.x] = num--;
		len--;
		for (int i = 0; i < len; i++) {
			map[mapping.y++][mapping.x] = num--;
		}
		mapping.y--; mapping.x++;
		for (int i = 0; i < len; i++) {
			map[mapping.y][mapping.x++] = num--;
		}
		mapping.x--; mapping.y--;
		for (int i = 0; i < len; i++) {
			map[mapping.y--][mapping.x] = num--;
		}
		mapping.y++; mapping.x--;
		len--;
		for (int i = 0; i < len; i++) {
			map[mapping.y][mapping.x--] = num--;
		}
		mapping.x++; mapping.y++;
		
	}

	XY find;
	for	(int i = 0; i < n; i++) {
		for (int l = 0; l < n; l++) {
			if(!(map[i][l]-findnum)) {
				find.x = l+1;
				find.y = i+1;
			}
			printf("%d ", map[i][l]);
		}
		putchar('\n');
	}
	printf("%d %d", find.y, find.x);
	free(map);
}
