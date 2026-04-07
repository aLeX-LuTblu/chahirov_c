#include<stdio.h>

enum TYPE {INT, FLOAT, CHAR};

union Data{
    int i;
    float f;
    char c;
};

struct Data_Uniuon
{
    enum TYPE nowtype;
    union Data value;
};


int main(){
    union Data data;

    data.i = 1;
    printf("%d, текущее значение в объединение Data\n", data.i);

    data.f = 4.0;
    printf("%2.f, текущее значение в объединение Data\n", data.f);

    data.c = 'p';
    printf("%c, текущее значение в объединение Data\n", data.c);

    struct Data_Uniuon current_data;
    current_data.value.i = 6;
    current_data.nowtype = INT;
    printf("текущее значение - %d, тип:%d", current_data.value.i, current_data.nowtype);
}