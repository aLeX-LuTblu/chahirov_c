#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    printf("Vvedite razmer massive ");
    scanf("%d", &size);

    int *arr = (int *) malloc(size*sizeof(int));

    for (int i =0; i< size; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<size; i++){
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}