#include <stdio.h>
#include <stdlib.h>

struct{
        int velocidad;
        int anio;
        int cantidad;
        char *tipo_cpu;
    } typedef computadora;

void mostrarLista(computadora l[]);
void mostrarVieja(computadora l[]);
void mostrarRapida(computadora l[]);

int main(){

    char tipos[5][10] = {"AMD", "Celeron", "Athlon", "Core", "Pentium"};

    computadora misComputadoras[5] = {
        {rand() % 3 + 1, rand() % 9 + 2015, rand() % 8 + 1, tipos[rand() % 5]},
        {rand() % 3 + 1, rand() % 9 + 2015, rand() % 8 + 1, tipos[rand() % 5]},
        {rand() % 3 + 1, rand() % 9 + 2015, rand() % 8 + 1, tipos[rand() % 5]},
        {rand() % 3 + 1, rand() % 9 + 2015, rand() % 8 + 1, tipos[rand() % 5]},
        {rand() % 3 + 1, rand() % 9 + 2015, rand() % 8 + 1, tipos[rand() % 5]}
    };

    mostrarLista(misComputadoras);

    mostrarVieja(misComputadoras);

    mostrarRapida(misComputadoras);

}

void mostrarLista(computadora l[]){

    for(int i = 0; i < 5; i++){

        printf("\nDatos de Computadora %d",  i + 1);
        printf("\nVelocidad: %d GHz", l[i].velocidad);
        printf("\nAnio: %d", l[i].anio);
        printf("\nCantidad: %d", l[i].cantidad);
        printf("\n CPU: %s\n", l[i].tipo_cpu);

    }

}

void mostrarVieja(computadora l[]){

    int menor = 2023;

    for(int i = 0; i < 5; i++){
        if(l[i].anio < menor){
            menor = l[i].anio;
        }
    }

    for(int i = 0; i < 5; i++){
        if(l[i].anio == menor){
            printf("\nDatos de Computadora Mas Vieja");
            printf("\nVelocidad: %d GHz", l[i].velocidad);
            printf("\nAnio: %d", l[i].anio);
            printf("\nCantidad: %d", l[i].cantidad);
            printf("\nTipo de CPU: %s\n", l[i].tipo_cpu);
        }
    }
}

void mostrarRapida(computadora l[]){

    int mayor = 0;

    for(int i = 0; i < 5; i++){
        if(l[i].velocidad > mayor){
            mayor = l[i].velocidad;
        }
    }

    for(int i = 0; i < 5; i++){
        if(l[i].velocidad == mayor){
            printf("\nDatos de Computadora Mas Rapida");
            printf("\nVelocidad: %d GHz", l[i].velocidad);
            printf("\nAnio: %d", l[i].anio);
            printf("\nCantidad: %d", l[i].cantidad);
            printf("\nTipo de CPU: %s\n", l[i].tipo_cpu);
        }
    }

}