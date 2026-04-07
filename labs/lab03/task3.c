#include<stdio.h>
#include<stdlib.h>

int max(int arr[], int size){
    int max = arr[0];
    for (int i =1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[], int size){
    int min = arr[0];
    for (int i =1; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int summ(int arr[], int size){
    int summ = 0;
    for (int i =0; i<size; i++){
        summ+=arr[i];
    }
    return summ;
}
int main(){
    int n;
    scanf("%d", &n);

    int *arr = (int *) malloc(n*sizeof(int));

    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int maximum = max(arr, n);
    int minimum = min(arr, n);
    int sum = summ(arr, n);

    printf("Максимум = %d\n", maximum);
    printf("minimuм = %d\n", minimum);
    printf("Summa = %d\n", sum);
    free(arr);
    return 0;
}