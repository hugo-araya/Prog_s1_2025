#include <stdio.h>
#include <string.h>

int main() {
  // Declaración e inicialización de cadenas
  char str1[20] = "Hola";
  char str2[] = " Mundo!";
  char str3[20];

  // Concatenación de cadenas
  strcat(str1, str2); // str1 ahora contiene "Hola Mundo!"
  printf("Concatenado: %s\n", str1);

  // Copia de cadenas
  strcpy(str3, str1); // str3 ahora contiene "Hola Mundo!"
  printf("Copiado: %s\n", str3);

  // Longitud de la cadena
  int len = strlen(str1); // len será 12 (incluyendo el espacio y el carácter nulo)
  printf("Longitud: %d\n", len);

  // Comparación de cadenas
  if (strcmp(str1, str3) == 0) {
    printf("str1 y str3 son iguales\n");
  }

  // Busqueda de un caracter
  char *ptr = strchr(str1, 'M');
  if (ptr != NULL){
      printf("Se encontro 'M' en: %s\n", ptr);
  }

  return 0;
}
