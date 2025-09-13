#include<stdio.h>
int arr[1000001];

int main() {

    arr[1] = 1;
    for(int i = 2; i <= 1000001; i++) {
        for(int l = 2; l * i <= 1000001 && !arr[i]; l++) {
            arr[i*l] = 1;
        }
    }

	int n;
	scanf("%d", &n);
    int i = 0;
	for(int num = 0; num <= n;i++) {
        if(!arr[i]){
            
			num++;
		}
		
			
    }
	
    printf("%d\n", i-1);


}
