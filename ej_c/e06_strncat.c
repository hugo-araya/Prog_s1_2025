#include <stdio.h>
#include <string.h>

int main() {
  char cadena1[20] = "Hola ";
  char cadena2[] = "mundo";
  strncat(cadena1, cadena2, 3); // Copia "mun"
  printf("Cadena resultante: %s\n", cadena1); // Salida: Cadena resultante: Hola mun
  return 0;
}
