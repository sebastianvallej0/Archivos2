#include <stdio.h>

int main(){

    FILE *vector=NULL;
    FILE *vector2=NULL;
    char buffer[100];
    int x,b;

    vector=fopen("vector.txt","r+");
    vector2=fopen("vector2.txt","w");
    
    if (vector==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
       fscanf(vector, "%d",&x);
       b=x*5;
        fprintf(vector2,"%d\n",b);
    }
     fclose(vector);
     fclose(vector2);
     return 0;
}
    