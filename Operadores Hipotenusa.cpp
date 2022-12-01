#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    float hipotenusa, cat1, cat2;

    printf("Digite los 2 Catetos: \n");
    scanf("%f %f", &cat1, &cat2);

    hipotenusa = sqrt(pow(cat1,2) + pow(cat2,2));

    printf("La hipotenusa del Triangulo es: %.2f \n", hipotenusa);


    return 0;
}
