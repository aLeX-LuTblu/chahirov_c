#include<stdio.h>

enum Day {Monday, Tuesday, Wednsday, Thursday, Friday, Saturday, Sunday};

struct nowDay {
    enum Day today;
};

int main(){
    struct nowDay current;
    current.today = Tuesday;
    switch (current.today)
    {
    case Monday:
        printf("today - Monday\n");
        break;
    case Tuesday:
        printf("today - Tuesday\n");
        break;
    case Wednsday:
        printf("today - Wednsday\n");
        break;
    case Thursday:
        printf("today - Thursday\n");
        break;
    case Friday:
        printf("today - Friday\n");
        break;
    case Saturday:
        printf("today - Saturday\n");
        break;
    case Sunday:
        printf("today - Sunday\n");
        break;
    default:
        printf("Uncount day\n");
        break;
    }

}