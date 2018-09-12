#include "header.h"
#include<stdlib.h>


void creare(int *a, int numar_elemente){
    int iterator;
    for(iterator = numar_elemente / 2; iterator >= 1; iterator--)
    {
        MinHeap(a, iterator, numar_elemente);
    }
}


int verificare(int a[], int numar_introdus, int iterator, int numar_elemente){
     int k = 0;
     for(iterator = 1; iterator <= numar_elemente; iterator++){
        if(a[iterator] == numar_introdus)
            k++;
    }
    if(k != 0)
        printf("DA");
        else
            printf("NU");
}

void stergere(int a[], int element_sters, int numar_elemente, int iterator){
    int v;
    int z = 0;
    int ok;
    for(iterator = 1; iterator <= numar_elemente; iterator ++){
        if(a[iterator] == element_sters){
            v = iterator;
            for(iterator = v; iterator < numar_elemente; iterator++){
                a[iterator] = a[iterator + 1];
            }
            numar_elemente--;
            for(iterator = 1; iterator <= numar_elemente; iterator++){
                printf("%d\n", a[iterator]);
            }
        }
    }
}

void MinHeap(int *a,int iterator,int numar_elemente){
    int j, t;
    t = a[iterator];
    j = 2 * iterator;
    while (j <= numar_elemente)
    {
        if (j < numar_elemente && a[j + 1] < a[j])
            j = j + 1;
        if (t < a[j])
            break;
        else if (t >= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = t;
    return;
}


