#include <stdio.h>

int arr[10001];

int main(){
int n;
scanf("%d", &n);
int buffer;
while(n--) {
scanf("%d", &buffer);
arr[buffer]++;
}

for(int i = 1; i <= 10000; i++) {
while(arr[i]--) {
printf("%d\n", i);

}
}


}
