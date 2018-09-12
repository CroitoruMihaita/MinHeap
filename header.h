#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#ifndef HEADER_H
#define HEADER_H

void creare(int *a, int numar_elemente);
int verificare(int a[], int numar_introdus, int iterator, int numar_elemente);
void stergere(int a[], int element_sters, int numar_elemente, int iterator);
void MinHeap(int *a,int iterator,int numar_elemente);

#endif

