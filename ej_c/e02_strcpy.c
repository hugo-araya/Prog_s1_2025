#include <stdio.h>
#include <string.h>

int main() {
  char destino[20];
  char origen[] = "Texto a copiar";
  strcpy(destino, origen);
  printf("Cadena destino: %s\n", destino); // Salida: Cadena destino: Texto a copiar
  return 0;
}
