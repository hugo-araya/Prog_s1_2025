#include <stdio.h>
#include "fenster.h"

int main(){
    FILE *ent, *sal;
    char magica[5];
    char comen[100];
    int ancho, alto, grises, pixel, i, j, cont = 0;
    unsigned int pixeles[800][800];
    ent = fopen("Cartagena_nega_ch.pgm", "r");
    sal = fopen("Cartagena_nega_ch_10.pgm", "w"); 
    fgets(magica, 5, ent);
    fprintf(sal, "%s", magica);
    fgets(comen, 100, ent);
    fprintf(sal, "%s", comen);

    fscanf(ent, "%d", &ancho);
    fscanf(ent, "%d", &alto);
    fscanf(ent, "%d", &grises);   
    fprintf(sal, "%d %d\n%d\n", ancho, alto, grises); 
    printf("%d %d\n%d\n", ancho, alto, grises); 
    i = 0;
    while (i < alto){
        j = 0;
        while (j < ancho){
            fscanf(ent, "%d", &pixel);
            if (pixel < 180){
                pixel = 0;
            }
            else{
                pixel = 255;
            }
            fprintf(sal, "%d\n", pixel);
            pixeles[i][j] = pixel;
            j++;
        }
        i++;
    }

    uint32_t buf[ancho * alto];
    struct fenster f = { .title = "Mas clara", .width = ancho, .height = alto, .buf = buf };
    fenster_open(&f);
    while (fenster_loop(&f) == 0) {
        i = 0;
        while (i < alto){
            j = 0;
            while (j < ancho){
                //fenster_pixel(&f, j, i) = pixeles[i][j];
                fenster_pixel(&f, j, i) = pixeles[i][j];
                j++;
            }
            i++;
        }  
    }

    fenster_close(&f);

    fclose(ent);
    fclose(sal);
    return 0;
}