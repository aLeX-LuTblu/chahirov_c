#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("введите начальный размер: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){ 
        arr[i] = i + 1;
    }

    printf("введите новый размер: ");
    scanf("%d", &m);

    arr = (int*)realloc(arr, m * sizeof(int));
    printf("введите новыe элементы: ", m - n);
    for(int i = n; i < m; i++){
        scanf("%d", &arr[i]);
    } 

    printf("oбновленный массив: ");
    for(int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    m = n;
    arr = (int*)realloc(arr, m * sizeof(int));
    
    free(arr);
    return 0;
}