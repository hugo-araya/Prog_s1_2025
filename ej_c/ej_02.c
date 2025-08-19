#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], palabra[20], mayor[20], menor[20], c; 
    int i = 0, j = 0, flag = 0; 
	
    printf("\n\nEncuentra la palabra mas y mas chica de un texto:\n");
    printf("-----------------------------------------------------\n");
    printf("Ingrese texto : ");
    i = 0;
    while ((c = getchar()) != '\n' && i < sizeof(str) - 1) {
        if (isalnum(c) || isspace(c)) { 
            str[i++] = c; 
        }
    }
    str[i] = '\0'; 
    for (i = 0; i < strlen(str); i++) {
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i])) { 
            palabra[j++] = str[i++]; 
        }
        if (j != 0) { 
            palabra[j] = '\0'; 
            if (!flag) { 
                flag = !flag; 
                strcpy(mayor, palabra);
                strcpy(menor, palabra);
            }
            if (strlen(palabra) > strlen(mayor)) { 
                strcpy(mayor, palabra);
            }
            if (strlen(palabra) < strlen(menor)) { 
                strcpy(menor, palabra); 
            }
            j = 0; 
        }
    }
    printf("La palabra mas grande es '%s' \ny la palabra mas chica es '%s' \nen el texto: '%s'.\n", mayor, menor, str);
    return 0;
}
