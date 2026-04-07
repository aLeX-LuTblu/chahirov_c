#include <stdio.h>
#include <stdlib.h>

void print_list(int *arr, int size) {
    if (size == 0) {
        printf("\nсписок пуст.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *list = NULL; 
    int size = 0;     
    int choice;       

    while (1) {
        printf("--- МЕНЮ УПРАВЛЕНИЯ СПИСКОМ ---\n");
        printf("1. Добавить элемент\n");
        printf("2. Удалить элемент по индексу\n");
        printf("3. Вывести список\n");
        printf("4. Изменить размер массива\n");
        printf("Выберите действие\n");
        scanf("%d", &choice);

        if (choice == 1) {
            size++;
            list = (int*)realloc(list, size * sizeof(int));
            if (list == NULL) return 1; 

            printf("введите число для добавления: ");
            scanf("%d", &list[size - 1]);
            printf("элемент добавлен.\n");
        } 
        else if (choice == 2) {
            if (size == 0) {
                printf("нечего удалять.\n");
                continue;
            }
            int index;
            printf("введите индекс для удаления: ");
            scanf("%d", &index);

            if (index < 0 || index >= size) {
                printf("неверный индекс.\n");
            } else {
                for (int i = index; i < size - 1; i++) {
                    list[i] = list[i + 1];
                }
                size--;
                list = (int*)realloc(list, size * sizeof(int));
            }
        } 
        else if (choice == 3) {
            print_list(list, size);
        } 
        else if (choice == 4) {
            int new_size;
            printf("введите новый размер массива: ");
            scanf("%d", &new_size);

            if (new_size < 0) {
                printf("размер не может быть отрицательным.\n");
                continue;
            }

            list = (int*)realloc(list, new_size * sizeof(int));
            if (new_size > size) {
                printf("массив расширен, введите новые значения: ");
                for (int i = size; i < new_size; i++) {
                    scanf("%d", &list[i]);
                }
            }
            size = new_size;
        } 
        else {
            printf("команда не найдена.\n");
        }
    }
    free(list);
    return 0;
}