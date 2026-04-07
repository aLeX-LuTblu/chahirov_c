#include<stdio.h>

enum course {FIRST, SECOND, THIRD, FOURTH};

struct Student {
    char name[100]; 
    int age;
    enum course current_course;
    float score;
};

struct Student students[20] =
{
    {"Ivan", 16, FIRST, 5.0}
};

struct Student* findForName(struct Student* students, int size, char* targetName){
    for (int i =0; i<size; i++){
        char *s1 = students[i].name;
        char *s2 = targetName;

        int flag = 1;
        int j = 0;

        while (s1[j] != '\0' || s2[j]!='\0'){
            if (s1[j]!=s2[j]){
                flag = 0;
                break;
            }
            j++;
        }
        if (flag){
            return &students[i];
        }
    }
    return 0;
}

struct Student* sort(struct Student* students, int size){
    int count = 0;
    struct Student temp;
    while (count != size){
        for (int i =0; i<size-1; i++){
            if (students[i].score > students[i+1].score){
                temp = students[i];
                students[i] = students[i+1];
                students[i+1] = temp;
            }
        }
        count ++;
    }
    return students;
}

void returnListOfStudents(struct Student* students, int size){
    for (int i = 0; i<size; i++){
        printf("имя студента - %s, возраст - %d, курс - %d, текущий балл - %.2f\n", students[i].name, students[i].age, students[i].current_course + 1, students[i].score);
    }
}

void addNewStudent(struct Student* students, int count, char* newname, int newage, enum course newcourse, float newscore) {
    int i = 0;
    while (newname[i] != '\0') {
        students[count].name[i] = newname[i];
        i++;
    }
    students[count].name[i] = '\0'; 
    
    students[count].age = newage;
    students[count].current_course = newcourse;
    students[count].score = newscore;
}

int main(){
    int count = 1;

    int curren_do;
    
    char current_name[100];
    int age;
    float score;
    int intcourse;
    while (1){
        printf("-----------Выберете что нужно сделать\n-----------1) Вывести список студентов\n-----------2) Добавить студента в список\n-----------3) Найти студента по имени\n-----------4) Отсортировать студентов по баллу\n");
        scanf("%d", &curren_do);
        switch (curren_do)
        {
        case 1:
            returnListOfStudents(students, count);
            printf("_________________________________________\n");
            break;
        case 2:
            printf("-----------------введитеь кол-во студентов-----------------------\n");
            int c;
            scanf("%d", &c);
            for (int i = 0; i<c; i++){
                printf("введите имя %d студента\n", i);
                scanf("%99s", current_name);

                printf("введите возраст студента\n");
                scanf("%d", &age);

                printf("введите курс студента(1-4)\n");
                scanf("%d", &intcourse);

                printf("введите балл студента\n");
                scanf("%f", &score);

                addNewStudent(students, count++, current_name, age, (enum course)(intcourse - 1), score);
            }
            printf("_________________________________________\n");
            break;
        case 3:
            printf("введите имя студента для поиска\n");
            char nameForFind[100];
            scanf("%99s", nameForFind);
            struct Student* found = findForName(students, count, nameForFind);
            if (found != 0) {
                printf("\nСтудент найден\n");
                printf("Имя: %s\n", found->name);
                printf("Возраст: %d\n", found->age);
                printf("Курс: %d\n", found->current_course + 1);
                printf("Средний балл: %.2f\n", found->score);
                
            } else {
                printf("\nСтудент с именем '%s' не найден в списке\n", nameForFind);
            }
            printf("_________________________________________\n");
            break;
        case 4:
            sort(students, count);
            printf("_________________________________________\n");
            break;
        default:
            printf("команда не найдена\n");
            printf("_________________________________________\n");
            break;
        }    
}
    return 0;
}