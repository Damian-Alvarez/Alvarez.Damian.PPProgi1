#include <stdio.h>
#include <stdlib.h>
#define TAM 3
typedef struct{
    int id;
    char nombre[20];
    int infec;
    int recu;
    int muertos;
}ePais;

void actualizarRecuperados(ePais paises, int rec);
int main()
{
    ePais paises[TAM] = {{1,"Argentina", 50000, 900, 20000},
                         {2,"Nigeria", 4579, 14, 789},
                         {3,"Colombia", 2076, 4809, 8}};

    actualizarRecuperados(paises[0], 900);
    return 0;
}

void actualizarRecuperados(ePais paises, int rec)
{
    paises.infec -=rec;
    paises.recu += rec;

    printf("El pais: %s\n Recuperados: %d\n Infectados: %d\n", paises.nombre, paises.recu,paises.infec);
}
