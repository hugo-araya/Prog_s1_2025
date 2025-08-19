#include <stdio.h>

int main() {
    char str[1000], caracter; 
    int i, contador = 0;

    printf("\n\nEncuentra la frecuencia de caracteres :\n");
    printf("--------------------------------------\n");

    printf("Ingrese texto : ");
    fgets(str, sizeof str, stdin); 
    printf("Ingrese el caracter : ");
    scanf("%c", &caracter); 
    for (i = 0; str[i] != '\0'; ++i) {
        if (caracter == str[i]) { 
            ++contador;
        }
    }
    printf("La frecuencia de '%c' es : %d\n\n", caracter, contador);
	return 0;
}
