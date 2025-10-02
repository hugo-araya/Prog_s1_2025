#include <stdio.h>
#include "fenster.h"
#include <string.h>

typedef struct imagen {
    char magica[5];
    char comen[100];
    int ancho, 
        alto, 
        grises;
    unsigned int pixeles[800][800];
} IMAGEN;

void lectura_imagen(char *, IMAGEN  *);
void revisa(IMAGEN);
void crea_archivo(IMAGEN);

int main(){
    
    char *nombre;
    IMAGEN original;
    int i, j;
    lectura_imagen("Cartagena_nega_ch.pgm", &original);
    uint32_t buf[original.ancho * original.alto];
    struct fenster f = { .title = "Mas clara", .width = original.ancho, .height = original.alto, .buf = buf };
    //revisa(original);
    crea_archivo(original);
    fenster_open(&f);
    while (fenster_loop(&f) == 0) {
        for (int i = 0; i < original.alto; i++){
            for (int j = 0; j < original.ancho; j++){
                fenster_pixel(&f, j, i) = original.pixeles[i][j];
            }
        }  
    }
    fenster_close(&f);
    return 0;
}

void lectura_imagen(char *nombre, IMAGEN *original ){
    FILE *ent;
    int pixel;
    ent = fopen(nombre, "r");
    fgets(original->magica, 5, ent);
    fgets(original->comen, 100, ent);
    fscanf(ent, "%d", &original->ancho);
    fscanf(ent, "%d", &original->alto);
    fscanf(ent, "%d", &original->grises);   
    for (int i = 0; i < original->alto; i++){
        for (int j = 0; j < original->ancho; j++){
            fscanf(ent, "%d", &pixel);
            original->pixeles[i][j] = pixel;
        }
    }
    fclose(ent);
}

void revisa(IMAGEN original){
    printf("Magica: %s\n", original.magica);
    printf("Comentario: %s\n", original.comen);
    printf("Ancho: %d\n", original.ancho);
    printf("Alto: %d\n", original.alto);   
    printf("Grises: %d\n", original.grises);  
    printf("pixeles[0][0]: %d\n", original.pixeles[0][0]);    
}

void crea_archivo(IMAGEN original){
    FILE *sal;
    sal = fopen("Cartagena_duplicado.pgm", "w"); 
    fprintf(sal, "%s", original.magica);
    fprintf(sal, "# Duplicado\n");
    fprintf(sal, "%d %d\n%d\n", original.ancho, original.alto, original.grises); 
    for(int i = 0; i < original.alto; i++){
        for (int j = 0; j < original.ancho; j++){
            fprintf(sal, "%d\n", original.pixeles[i][j]);
        }
    }
    fclose(sal);
}
