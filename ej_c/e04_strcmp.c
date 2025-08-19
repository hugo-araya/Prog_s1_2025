#include <stdio.h>
#include <string.h>

int main() {
  char cadena1[] = "hola";
  char cadena2[] = "hola";
  char cadena3[] = "mundo";

  printf("strcmp(cadena1, cadena2): %d\n", strcmp(cadena1, cadena2)); // Salida: 0 (iguales)
  printf("strcmp(cadena1, cadena3): %d\n", strcmp(cadena1, cadena3)); // Salida: < 0 (cadena1 < cadena3)
  printf("strcmp(cadena3, cadena1): %d\n", strcmp(cadena3, cadena1)); // Salida: > 0 (cadena3 > cadena1)
  return 0;
}
