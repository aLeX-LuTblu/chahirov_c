#include<stdio.h>
struct Recentagle{
    double width;
    double height;
};


double getarea(struct Recentagle r){
    return r.width*r.height;
}

double getperimeter(struct Recentagle *r){
    return (r->width + r->height)*2;
}

int main(){
    struct Recentagle recetagle1 = {14.5, 2.9};
    double area = getarea(recetagle1);
    double perimeter = getperimeter(&recetagle1);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}