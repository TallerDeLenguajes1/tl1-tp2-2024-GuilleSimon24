#include <stdio.h>
#include <stdlib.h>



struct compu
{
    int velocidad;      //Velocidad de procesamiento, entre 1 y 3 GHz
    int anio;           //Entre 2015 y 2023
    int cantidad;       //Entre 1 y 8 nucleos
    char *tipo_cpu;     //Tipo del procesador
    
}typedef compu;

void mostrarLista(compu pc[]){

    for (int i = 0; i < 5; i++)
    {
        printf("Velocidad de procesamiento: %dGHz\n", pc[i].velocidad);
        printf("Anio de fabricacion: %d\n", pc[i].anio);
        printf("Tipo de procesador: ");
        puts(pc[i].tipo_cpu);
        printf("Cantidad de nucleos: %d\n", pc[i].cantidad);
        puts("-----------------");
    }

}

void pcMasVieja(compu pc[]){
    int edad = 10000;
    int vieja;
    for (int i = 0; i < 5; i++)
    {
        if (edad > pc[i].anio)
        {
            edad = pc[i].anio;
            vieja = i;
        }
        
    }

    puts("La pc mas vieja es: ");
    printf("Velocidad de procesamiento: %dGHz\n", pc[vieja].velocidad);
    printf("Anio de fabricacion: %d\n", pc[vieja].anio);
    printf("Tipo de procesador: ");
    puts(pc[vieja].tipo_cpu);
    printf("Cantidad de nucleos: %d\n", pc[vieja].cantidad);
    puts("-----------------");
    
}

void masRapida(compu pc[]){

    int rapidez = 0;
    int masRa;
    for (int i = 0; i < 5; i++)
    {
        if (rapidez < pc[i].velocidad)
        {
            rapidez = pc[i].velocidad;
            masRa = i;
        }
        
    }

    puts("La pc mas rapida es: ");
    printf("Velocidad de procesamiento: %dGHz\n", pc[masRa].velocidad);
    printf("Anio de fabricacion: %d\n", pc[masRa].anio);
    printf("Tipo de procesador: ");
    puts(pc[masRa].tipo_cpu);
    printf("Cantidad de nucleos: %d\n", pc[masRa].cantidad);
    puts("-----------------");

}

int main(){
    
    compu pc[5];
    char tipos[6][10]= {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < 5; i++)
    {
        pc[i].velocidad = 1 +rand()%3;
        pc[i].anio = 2015 + rand()%10;
        pc[i].cantidad = 1+rand()%8;
        pc[i].tipo_cpu = tipos[rand()%7];
    }

    mostrarLista(pc);
    
    pcMasVieja(pc);
    
    masRapida(pc);

    return 0;
}