#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 3;
    int *arr = (int*)malloc(size * sizeof(int));
    arr[0] = 1; arr[1] = 2; arr[2] = 3;

    int pos, val;
    printf("введите позицию и значение: ");
    scanf("%d %d", &pos, &val);

    size++;
    arr = (int*)realloc(arr, size * sizeof(int));

    for(int i = size - 1; i > pos; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[pos] = val;

    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    free(arr);
    return 0;
}