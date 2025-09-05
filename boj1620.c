#include <stdio.h>

int main(void) {
    //find max

    int arr[10] = {1,28,15,0,51, 44,446,25,14,58};
    // 0 ~ 9 

    int max = -1;
    int max_index = -1;
    
    for(int i=0;i<10;i++) {
        //최댓값?

        if(max < arr[i]) {
            max = arr[i];
            max_index = i;
        }

    }

    int min = arr[0];
    int min_index = 0;

    for(int i=0;i<10;i++) {
        
        if(min>arr[i]) {
            min = arr[i];
            min_index = i;
        }
    }
    printf("max: %d index: %d", max, max_index);
    putchar('\n');
    printf("min: %d index: %d", min, min_index);

    return 0;
}