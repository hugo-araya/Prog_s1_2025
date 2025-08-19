#include <stdio.h>
int main(){
    char nombre[20];   
    nombre[0] = 'h';
    nombre[1] = 'u';
    nombre[2] = 'g';
    nombre[3] = 'o';
    nombre[4] = '\0';
    printf( "\nEl nombre que ha escrito es: %s*\n", nombre );
    return 0;
}