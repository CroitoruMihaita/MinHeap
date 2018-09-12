#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    int numar_elemente;
    int iterator;
    int x;

    printf("Introduceti numarul de elemente:\n");
    scanf("%d", &numar_elemente);

    int a[200];
    for (iterator = 1; iterator <= numar_elemente; iterator++)
    {
        printf("Introduceti elementul %d:", iterator);
        scanf("%d", &a[iterator]);
    }

    creare(a, numar_elemente);

    printf("Heap MIN:");
    for (iterator = 1; iterator <= numar_elemente; iterator++)
    {
        printf("\na[%d]=%d", iterator, a[iterator]);
    }

    int numar_introdus;
    printf("\nIntroduceti un numar natural:");
    scanf("%d", &numar_introdus);
    verificare(a, numar_introdus, iterator, numar_elemente);

    int element_sters;
    printf("\nIntrodduceti elementul ce urmeaza sa fie sters:");
    scanf("%d", &element_sters);
    stergere(a, element_sters, numar_elemente, iterator);

    return 0;
}
