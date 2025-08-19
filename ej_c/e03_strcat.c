#include <stdio.h>
#include <string.h>

int main() {
  char cadena1[20] = "Hola ";
  char cadena2[] = "mundo";
  strcat(cadena1, cadena2);
  printf("Cadena resultante: %s\n", cadena1); // Salida: Cadena resultante: Hola mundo
  return 0;
}
