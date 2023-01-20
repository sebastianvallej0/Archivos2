#include <stdio.h>
#include <stdlib.h>

int linea, alt;
int main(){

    FILE *archivo=NULL;
     FILE *archivo2=NULL;
    char buffer[100];
    int pi;

    archivo=fopen("vector.txt","r+");

    archivo2=fopen("vector2.txt","w+");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    

while (!feof(archivo)){
    fscanf(archivo, "%d", &pi);
    if (pi%5==0)
    {
          fprintf(archivo2,"%d Este es un multiplo de 5 \n", pi);
    }else{
        fprintf(archivo2,"%d \n", pi);
    }



pi++;
}


     fclose(archivo);
     fclose(archivo2);
     return 0;

}