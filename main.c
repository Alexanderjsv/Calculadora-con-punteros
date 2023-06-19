#include <stdio.h>
#include "punterocalcu.h"

int main(void){
    float a,b,c;
    float* p1;
    float* p2;
    float* r;

    p1=&a;
    p2=&b;
    r=&c;

    printf("Coloque el numero 1\n");
    scanf("%f",&a);
    printf("Coloque el numero 2\n");
    scanf("%f",&b);

    suma(p1,p2,r);
    printf("Suma: %.2f",r);

    resta(p1,p2,r);
    printf("Resta: %.2f",r);

    multi(p1,p2,r);
    printf("Multi: %.2f",r);

    div(p1,p2,r);
    printf("Div: %.2f",r);


}