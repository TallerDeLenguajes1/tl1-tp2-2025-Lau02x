#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct  {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
    }compu;
int main(){
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
        "Pentium"};
    compu arregloDePcs[5];
    for (int i = 0; i < 5; i++)
    {
        printf("PC %d: \n", i+1);
        arregloDePcs[i].velocidad=rand() % 3+1;
        arregloDePcs[i].anio=rand() % (2024-2015+1)+2015;
        arregloDePcs[i].cantidad_nucleos=rand() % 8 +1;
        arregloDePcs[i].tipo_cpu=tipos[rand()%6];
        printf("Velodidad GHz: %d \n",arregloDePcs[i].velocidad);
        printf("Anio de fabricacion: %d \n",arregloDePcs[i].anio);
        printf("Cantidad de nucleos: %d \n",arregloDePcs[i].cantidad_nucleos);
        printf("Tipo de cpu: %s \n",arregloDePcs[i].tipo_cpu);
    }
    



    return 0;
}