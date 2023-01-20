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
/*
    for(int i=0; i<100; i+=3){
        int n;
        
        fgets(buffer,100,archivo);
        if (buffer==5)
        {
            fputs(buffer, " Es multiplo de 5");
        }
        
    
    }
*/
while (!feof(archivo)){
    fscanf(archivo, "%d", &pi);
    if (pi%5==0)
    {
          fprintf(archivo2,"%d Es multiplo de 5 \n", pi);
    }else{
        fprintf(archivo2,"%d \n", pi);
    }


/*
    printf("el número en la cuarta línea es %lf",pi);
    fscanf(buffer, 100, archivo);
    alt=linea%5;
    if (alt==5)
    {
          fputs(buffer, " Es multiplo de 5");
    }
*/

pi++;
}


     fclose(archivo);
     fclose(archivo2);
     return 0;

}