#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person
{
    char * name;
    struct Date birthday;    
};

struct Date dates[3] =
{
    {26, 9, 2009},
    {29, 12, 1982},
    {14, 8, 1988}
};


int main(){
    struct Person persons[3] =
{
    {"Ivan", dates[0]},
    {"Artemiy", dates[1]},
    {"Adolf", dates[2]},
};
    for(int i=0; i<3; i++){
        if (dates[i].year >=2000){
            printf("Name: %s, Birth Year: %d.%d.%d\n", persons[i].name, persons[i].birthday.day, persons[i].birthday.month, persons[i].birthday.year);
        }
    }
}