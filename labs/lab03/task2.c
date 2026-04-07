#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    scanf("%d", &size);

    int *arr = (int *) calloc(size, sizeof(int));

    for (int i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}