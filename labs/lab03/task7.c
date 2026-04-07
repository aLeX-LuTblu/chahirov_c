#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
} ;

int main() {
    int n;
    printf("Кол-во студентов: ");
    scanf("%d", &n);

    struct Student *list = (struct Student*)malloc(n * sizeof(struct Student));

    for(int i = 0; i < n; i++) {
        printf("имя и возраст %d: ", i + 1);
        scanf("%s %d", list[i].name, &list[i].age);
    }

    int max_idx = 0;
    for(int i = 1; i < n; i++) {
        if(list[i].age > list[max_idx].age) max_idx = i;
    }

    printf("\nсамый старший: %s, %d лет\n", list[max_idx].name, list[max_idx].age);
    
    free(list);
    return 0;
}