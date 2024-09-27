//

#include <stdio.h>

int main (int argc, char *argv[]) {
    float nums[6];
    float max=0, min=10, prom=0;

    char nombre[20];
    char materia[20];

    printf("Ingrese el nombre del alumno: ");
    scanf("%s",&nombre);

    printf("Ingrese el nombre de la materia: ");
    scanf("%s",&materia);
    
    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la calificacion %d: ",i);
        scanf("%f",&nums[i]);
        if (nums[i]<0 || nums[i]>10)
        {
            printf("El valor ingresado es incorrecto\n");
            i--;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        if(nums[i]>max){
            max=nums[i];
        }
        if(nums[i]<min){
            min=nums[i];
        }
        prom=prom+nums[i];
    }
    
    prom=prom/6;

    printf("El alumno %s posee las siguientes calificaciones: \n",nombre);
    printf("La calificacion mayor es: %.2f\n",max);
    printf("La calificacion menor es: %.2f\n",min);
    printf("El promedio es: %.2f\n",prom);
    printf("En la materia: %s\n",materia);

    return 0;
}