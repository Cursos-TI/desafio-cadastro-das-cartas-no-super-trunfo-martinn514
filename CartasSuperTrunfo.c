#include <stdio.h>
int main(){

//carta 1

    char estado1, ciudad1[50], codigo1[4];
    int poblacion1, puntost1;
    float area1,pib1;
    
    printf("Digite una letra de la A a la H: \n");
    scanf(" %c", &estado1);
    
    printf("Digite el Numero de codigo del 01 al 04 (Ej: A02): \n");
    scanf(" %s", &codigo1);

    printf("Digite una ciudad: \n");
    scanf(" %s", ciudad1);

    printf("Digite la poblacion: \n");
    scanf(" %d", &poblacion1);

    printf("Digite el area: \n");
    scanf(" %f", &area1);

    printf("Digite el PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite cantidad de puntos turisticos: \n");
    scanf(" %d", &puntost1);

//carta2

    char estado2, ciudad2[50], codigo2[4];
    int poblacion2, puntost2;
    float area2,pib2;
    
    printf("Digite una letra de la A a la H: \n");
    scanf(" %c", &estado2);

    printf("Digite el Numero de codigo del 01 al 04 (Ej: A02): \n");
    scanf(" %s", &codigo2);

    printf("Digite una ciudad: \n");
    scanf(" %s", ciudad2);

    printf("Digite la poblacion: \n");
    scanf(" %d", &poblacion2);

    printf("Digite el area: \n");
    scanf(" %f", &area2);

    printf("Digite el PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite cantidad de puntos turisticos: \n");
    scanf(" %d", &puntost2);

    printf("Carta 1\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1,codigo1);
    printf("Ciudad: %s \n", ciudad1);
    printf("Poblacion: %d \n", poblacion1);
    printf("Area: %f km2 \n", area1);
    printf("PIB: %f billonhes de reais \n", pib1);
    printf("Puntos turisticos: %d \n",puntost1);
    
    printf("Carta 2\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2,codigo2);
    printf("Ciudad: %s \n", ciudad2);
    printf("Poblacion: %d \n", poblacion2);
    printf("Area: %f km2 \n", area2);
    printf("PIB: %f billonhes de reais \n", pib2);
    printf("Puntos turisticos: %d \n",puntost2);

    return 0;
}
