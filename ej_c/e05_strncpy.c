#include <stdio.h>
#include <string.h>

int main() {
  char destino[10];
  char origen[] = "Texto a copiar";
  strncpy(destino, origen, 5);
  destino[5] = '\0'; // Asegurarse de que termine en nulo
  printf("Cadena destino: %s\n", destino); // Salida: Cadena destino: Texto
  return 0;
}
