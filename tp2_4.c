#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct  {
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
    }compu;

    void listarPCs(compu pcs[], int cantidad);
     char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
        "Pentium"};
        void mostrarMasVieja(compu pcs[], int cantidad);
int main(){
    srand(time(NULL));

    compu arregloDePcs[5];
    for (int i = 0; i < 5; i++)
    {
        arregloDePcs[i].velocidad=rand() % 3+1;
        arregloDePcs[i].anio=rand() % (2024-2015+1)+2015;
        arregloDePcs[i].cantidad_nucleos=rand() % 8 +1;
        arregloDePcs[i].tipo_cpu=tipos[rand()%6];
    }
    listarPCs(arregloDePcs,5);
    mostrarMasVieja(arregloDePcs,5);

    return 0;
}
void listarPCs(compu pcs[], int cantidad)
{   

    for (int i = 0; i < cantidad; i++)
    {
        printf("PC %d: \n", i+1);
        pcs[i].velocidad=rand() % 3+1;
        pcs[i].anio=rand() % (2024-2015+1)+2015;
        pcs[i].cantidad_nucleos=rand() % 8 +1;
        pcs[i].tipo_cpu=tipos[rand()%6];
        printf("Velodidad GHz: %d \n",pcs[i].velocidad);
        printf("Anio de fabricacion: %d \n",pcs[i].anio);
        printf("Cantidad de nucleos: %d \n",pcs[i].cantidad_nucleos);
        printf("Tipo de cpu: %s \n",pcs[i].tipo_cpu);
    }
}
void mostrarMasVieja(compu pcs[], int cantidad){
    int viejo = 2025;
    int indiceDelViejo;
    for (int i = 0; i < cantidad; i++)
    {

        if(pcs[i].anio < viejo)
        {
            viejo=pcs[i].anio;
            indiceDelViejo=i;
        }
    }
    printf("PC mas vieja, la PC %d : \n",indiceDelViejo+1);
    
        printf("Velodidad GHz: %d \n",pcs[indiceDelViejo].velocidad);
        printf("Anio de fabricacion: %d \n",pcs[indiceDelViejo].anio);
        printf("Cantidad de nucleos: %d \n",pcs[indiceDelViejo].cantidad_nucleos);
        printf("Tipo de cpu: %s \n",pcs[indiceDelViejo].tipo_cpu);

    

}