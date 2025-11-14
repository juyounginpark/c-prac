#include<stdio.h>
int arr[1000001];
int n, m, D;
int f(char* S) {
  for(int i = 0; S[i]; i++) {
    if(S[i] == 'D'+'0') return 1;
  }
  return 0;
}


int main() {

    scanf("%d %d %d", &n, &m, &D);

    arr[1] = 1;
    for(int i = 2; i <= 10000000; i++) {
        for(int l = 2; l * i <= 10000000 && !arr[i]; l++) {
            arr[i*l] = 1;
        }
    }

    int sum = 0;
    char str[10000000];
    for(int i = n; i <= m; i++) {
      sprintf(str,"%d",arr[i]);
      sum += f(str);
    }
    printf("%d", sum);



}