#include<stdio.h>

struct Student
{
    char * name;
    int age;
    float score;
};


int main(){
    char na[100];
    int ag;
    float sc;
    fgets(na, sizeof(na), stdin);
    scanf("%d", &ag);
    scanf("%f", &sc);

    for (int i = 0; na[i] != '\0'; i++) {
    if (na[i] == '\n') {
        na[i] = '\0';
        break;
    }
}

    struct Student student1 = {na, ag, sc};
    printf("Name student - %s, age - %d, now score - %.2f", student1.name, student1.age, student1.score);
    return 0;
}