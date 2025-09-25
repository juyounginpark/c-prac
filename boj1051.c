#include <stdio.h>

int n, m;
int map[51][51];

int main() {
	scanf("%d %d", &n, &m);
	
	int max = 1;
	
	int S = ( n < m ? n : m);
	for(int i = 0; i < n; i++) {
		for(int l = 0; l < m; l++) {
			for(int j = 2; j < S j++) {
				if(S >= n || S >= m) break;
				if(map[i][l] == map[i+j][l]&&
					map[i+j][l] == map[i+j][l+j]&&
					map[i+j][l+j] == map[i][l+j])
				{
					if(max < j) j = max;
				}
			}
		}
	}

	printf("%d\n", max);

}
